package lab6.trzynascie_dwa;

import java.util.Scanner;

class Osoba implements java.io.Serializable {
    String imie;
    String nazwisko;
    int pesel;
    Osoba(String im, String nazw, int pes) {
        imie = im;
        nazwisko = nazw;
        pesel = pes;
    };
    Osoba() {
        imie = "";
        nazwisko = "";
        pesel = 0;
    };
    void wczytaj() {
        Scanner in = new Scanner(System.in);
        System.out.print("Podaj imie: ");
        imie = in.nextLine();
        System.out.println("imie: " + imie);
        System.out.print("Podaj nazwisko: ");
        nazwisko = in.nextLine();
        System.out.println("nazwisko: " + nazwisko);
        System.out.print("Podaj pesel: ");
        pesel = in.nextInt();
        System.out.println("pesel: " + nazwisko);
    };
    void wyswietl() {
        System.out.println(nazwisko + " " + imie + " " + pesel);
    };
    int daj_pesel() { return pesel; }
    String daj_nazwisko() { return nazwisko; }
    String daj_imie() { return imie; }
};