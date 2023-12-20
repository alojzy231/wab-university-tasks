package lab4.dziewiec_dwa;

import java.util.Scanner;

class Osoba {
    private String imie; // Imie
    private String nazwisko; // Nazwisko
    private int pesel; // Pesel
    Osoba(String imie, String nazw, int pesel) throws
            IllegalArgumentException {
        if(imie.length() == 0){
            throw new IllegalArgumentException("Musisz podac imie!");
        }
        if(nazwisko.length() == 0){
            throw new IllegalArgumentException("Musisz podac imie!");
        }

        // w ramach zajec pesel bedzie mial jedynie 8 cyfr
        // (tak dostarczony byl kod w przykladzie; pesel ma byc typu int)
        if(pesel < 10_000_000 || pesel > 99_999_999){
            throw new IllegalArgumentException("Niepoprawny pesel!");
        }
        this.imie = imie;
        this.nazwisko = nazw;
        this.pesel = pesel;
    }

    Osoba() {
        // Uzupełnić konstruktor
        this.imie = "";
        this.nazwisko = "";
        this.pesel = 10_000_000;
    }

    void wyswietl() {
        // Wyswietl imie nazwisko i pesel
        System.out.println("Imie:" + this.imie);
        System.out.println("Nazwisko:" + this.nazwisko);
        System.out.println("Pesel:" + this.pesel);
    }
    void wczytaj() throws
            IllegalArgumentException  {
        Scanner in = new Scanner(System.in);

        System.out.print("Podaj imie: ");
        String imie = in.nextLine();

        if(imie.length() == 0){
            throw new IllegalArgumentException("Musisz podac imie!");
        }

        this.imie = imie;

        System.out.print("Podaj nazwisko: ");
        String nazwisko = in.nextLine();

        if(nazwisko.length() == 0){
            throw new IllegalArgumentException("Musisz podac imie!");
        }

        this.nazwisko = nazwisko;

        System.out.print("Podaj pesel: ");
        int pesel = in.nextInt();


        if(pesel < 100_000_000 || pesel > 999_999_999){
            throw new IllegalArgumentException("Niepoprawny pesel!");
        }

        this.pesel = pesel;
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
