package lab4.dziewiec_jeden;

import java.util.Scanner;

public class Pracownik extends Osoba{
    String zakladPracy; // Gdzie pracuje

    Pracownik(String imie, String nazwisko, int pesel, String zakladPracy) throws
            IllegalArgumentException {
        super(imie, nazwisko, pesel);

        if(zakladPracy.length() == 0){
            throw new IllegalArgumentException("Musisz wprowadzic jezyk programowania!");
        }
        this.zakladPracy = zakladPracy;
    }

    Pracownik(){
        super();
        this.zakladPracy = "";
    }

    void wyswietl() {
        super.wyswietl();

        System.out.println("Zaklad pracy:" + this.zakladPracy);
    }
    void wczytaj() throws
            IllegalArgumentException  {
        super.wczytaj();

        Scanner in = new Scanner(System.in);

        System.out.print("Podaj zaklad pracy: ");
        String zakladPracy = in.nextLine();


        if(zakladPracy.length() == 0){
            throw new IllegalArgumentException("Musisz wprowadzic jezyk programowania!");
        }

        this.zakladPracy = zakladPracy;
    }
    String dajZakladPracy() {
        // Zwroc zaklad pracy
        return this.zakladPracy;
    }
}
