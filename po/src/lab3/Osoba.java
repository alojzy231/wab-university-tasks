package lab3;

import java.util.Scanner;

class Osoba {
    String imie; // Imie
    String nazwisko; // Nazwisko
    int pesel; // Pesel
    Osoba(String imie, String nazw, int pesel) {
        // Uzupełnić konstruktor
        this.imie = imie;
        this.nazwisko = nazw;
        this.pesel = pesel;
    }

    Osoba() {
        // Uzupełnić konstruktor
        this.imie = "";
        this.nazwisko = "";
        this.pesel = 00000000000;
    }

    void wyswietl() {
        // Wyswietl imie nazwisko i pesel
        System.out.println("Imie:" + this.imie);
        System.out.println("Nazwisko:" + this.nazwisko);
        System.out.println("Pesel:" + this.pesel);
    }
    void wczytaj() {
        Scanner in = new Scanner(System.in);
        System.out.print("Podaj imie: ");
        this.imie = in.nextLine();
        System.out.print("Podaj nazwisko: ");
        this.nazwisko = in.nextLine();
        System.out.print("Podaj pesel: ");
        this.pesel = in.nextInt();
    }
    String dajImie() {
        // Zwroc imie
        return this.imie;
    }
    String dajNazwisko() {
        // Zwroc nazwisko
        return this.nazwisko;
    }
    int dajPesel() {
        // Zwroc pesel
        return this.pesel;
    }
};
