package lab4.dziewiec_jeden;

import java.util.Scanner;

public class StudentInf extends Student{
    private String jezykProg; // Jaki zna język programowania

    StudentInf(String imie, String nazwisko, int pesel, int indeks, String jezykProg) throws
            IllegalArgumentException {
        super(imie, nazwisko, pesel,indeks);

        if(jezykProg.length() == 0){
            throw new IllegalArgumentException("Musisz wprowadzic jezyk programowania!");
        }
        this.jezykProg = jezykProg;
    }

    StudentInf(){
        super();
        this.jezykProg = "";
    }

    void wyswietl() {
        super.wyswietl();

        System.out.println("Jezyk programowania:" + this.jezykProg);
    }
    void wczytaj() throws
            IllegalArgumentException  {
        super.wczytaj();

        Scanner in = new Scanner(System.in);

        System.out.print("Podaj jezyk programowania: ");
        String jezykProg = in.nextLine();


        if(jezykProg.length() == 0){
            throw new IllegalArgumentException("Musisz wprowadzic jezyk programowania!");
        }

        this.jezykProg = jezykProg;
    }
    String dajJezykProg() {
        // Zwroc jezyk programowania
        return this.jezykProg;
    }
}
