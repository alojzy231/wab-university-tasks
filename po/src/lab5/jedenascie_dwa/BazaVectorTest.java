package lab5.jedenascie_dwa;

import java.util.Scanner;

class BazaVectorTest {

    public static void main(String[] args) { // Program testowy
        int wybor,pes;
        Baza myBaza = new Baza();
        Scanner scan = new Scanner(System.in);

        // Menu ----------------------------
        do {
            System.out.println("1 dodaj, 2 szukaj po peselu, 3 szukaj po nazwisku, 4 usun, 5 wypisz, 6 koniec");
            wybor = scan.nextInt();
            System.out.println("wybor = " + wybor);
            switch(wybor) {
                case 1: System.out.println("dodaj");
                    Osoba osoba = new Osoba();
                    osoba.wczytaj();

                    myBaza.dodaj(osoba);
                    break;
                case 2: System.out.println("szukaj po peselu");
                    System.out.println("Podaj pesel: ");
                    pes = scan.nextInt();

                    myBaza.szukajPesel(pes);
                    break;
                case 3: System.out.println("szukaj po nazwisku");
                    System.out.println("Podaj nazwisko: ");
                    // consume /n character
                    // https://stackoverflow.com/questions/12265216/why-cant-i-enter-a-string-in-scannersystem-in-when-calling-nextline-method
                    scan.nextLine();
                    String nazw = scan.nextLine();

                    myBaza.szukajNazwisko(nazw);
                    break;
                case 4: System.out.println("usun");
                    System.out.println("Podaj pesel: ");
                    pes = scan.nextInt();
                    myBaza.usun(pes);
                break;
                case 5: System.out.println("wypisz");
                    myBaza.wyswietl();
                    break;
            }

        } while(wybor != 6);
        System.out.println("Koniec");
    }
}
