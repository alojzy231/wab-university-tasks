package lab5.jedenascie_dwa;

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
    int szukajPesel(int pesel) {
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

    // Przeszukiwanie bazy po nazwisku ----
    int szukajNazwisko(String nazwisko) {
        Osoba os;
        System.out.println("Szukanie nazwisko: " + nazwisko);

        // czy baza pusta ?
        if(tab.size() == 0) {
            System.out.println("Baza pusta");
            return -1;
        }

        // Przegladamy tablice tab ---
        for(int i=0;i<tab.size(); i++) {
            os = tab.get(i);
            os.wyswietl();
            String nazw = os.daj_nazwisko();
            if(nazw.equals(nazwisko)) {
                System.out.print("znaleziono na poz: " + i + " - ");
                os.wyswietl();
                return i;
            }
        }

        System.out.println("nie znaleziono nikogo o nazwisku " + nazwisko);
        return -1;
    }

    int usun(int pesel) {
        int i = 0;
        int found = -1;
        Osoba osob;
        System.out.println("usun, pesel: " + pesel);
        found = this.szukajPesel(pesel);
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
}
