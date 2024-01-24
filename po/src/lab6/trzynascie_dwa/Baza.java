package lab6.trzynascie_dwa;

import lab6.trzynascie_jeden.Employee;

import java.io.*;
import java.util.Vector;

class Baza {
    final int MAX = 50; // Poczatkowy rozmiar tablicy
    Vector <Osoba> tab;

    Baza() // konstruktor
    {
        tab = new Vector(MAX);
        tab.clear();
    };

    // Dodanie osoby os do bazy --------
    int dodaj(Osoba os) {
        tab.addElement(os);

        return 1;
    }

    // Wyswietlenie bazy -----------
    void wyswietl() {
        int i;
        System.out.println("Wyswietl - elementow: " + tab.size());

        for(Osoba os: tab){
            os.wyswietl();
        }
    }

    // Przeszukiwanie bazy po peselu ----
    int szukaj(int pesel) {
        int pes;
        Osoba os;
        System.out.println("Szukanie pesel: " + pesel);

        // czy baza pusta ?
        if(tab.size() == 0) {
            System.out.println("Baza pusta");
            return -1;
        }

        // Przegladamy tablice tab ---
        for(int i=0;i<tab.size(); i++) {
            os = tab.get(i);
            os.wyswietl();
            pes = os.daj_pesel();
            if(pes == pesel) {
                System.out.print("znaleziono na poz: " + i + " - ");
                os.wyswietl();
                return i;
            }
        }

        System.out.println("nie znaleziono nikogo o peselu " + pesel);

        return -1;
    }


    int usun(int pesel) {
        int found = -1;
        System.out.println("usun, pesel: " + pesel);
        found = this.szukaj(pesel);
        // Sprawdzamy czy znaleziono ---
        if(found < 0) {
            System.out.println("Nie znaleziono osoby");
            return 0;
        }
        // Usuwamy osobe ---------------
        System.out.println("usuwamy z pozycji: " + found) ;
        tab.removeElementAt(found);
        return 1;
    }

    void zapisz(){
        try {
            FileOutputStream fileOut =
                    new FileOutputStream("baza.ser");
            ObjectOutputStream out = new ObjectOutputStream(fileOut);
            out.writeObject(this.tab);
            out.close();
            fileOut.close();
            System.out.println("Serialized data is saved in baza.ser");
        } catch (IOException i) {
            i.printStackTrace();
        }
    }

    void odczyt(){
        try {
            FileInputStream fileIn = new FileInputStream("baza.ser");
            System.out.println("Otwarcie pliku baza.ser");
            ObjectInputStream in = new ObjectInputStream(fileIn);
           this.tab = (Vector <Osoba>) in.readObject();
            in.close();
            fileIn.close();
        } catch (IOException i) {
            i.printStackTrace();
            return;
        } catch (ClassNotFoundException c) {
            System.out.println("Osoba class not found");
            c.printStackTrace();
            return;
        }
    }
}
