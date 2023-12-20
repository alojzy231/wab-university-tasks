package lab4.dziewiec_dwa;

import java.util.Scanner;

public class Student extends Osoba {
    private int indeks; // Numer indeksu

    Student(String imie, String nazwisko, int pesel, int indeks) throws
            IllegalArgumentException {
        super(imie, nazwisko, pesel);

        if(indeks < 10_000 || pesel > 99_999){
            throw new IllegalArgumentException("Niepoprawny numer indeksu!");
        }
        this.indeks = indeks;
    }

    Student(){
        super();
        this.indeks = 0;
    }

    void wyswietl() {
        super.wyswietl();

        System.out.println("Indeks:" + this.indeks);
    }
    void wczytaj() throws
            IllegalArgumentException  {
        super.wczytaj();

        Scanner in = new Scanner(System.in);

        System.out.print("Podaj indeks: ");
        int indeks = in.nextInt();


        if(indeks < 10_000 || indeks > 99_999){
            throw new IllegalArgumentException("Niepoprawny numer indeksu!");
        }

        this.indeks = indeks;
    }
    int dajIndeks() {
        // Zwroc indeks
        return this.indeks;
    }
}
