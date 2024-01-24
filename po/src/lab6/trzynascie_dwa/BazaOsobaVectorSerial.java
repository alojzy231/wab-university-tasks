package lab6.trzynascie_dwa;

import java.util.Scanner;
class BazaOsobaVectorSerial {
    public static void main(String args[]) {
        System.out.println("Start");
        Baza mybaza = new Baza();
        Osoba os = new Osoba();

        // Odczyt bazy z dysku ----------
        mybaza.odczyt();
        mybaza.wyswietl();
        // Wczytywanie opcji
        Scanner in = new Scanner(System.in);
        int wybor;
        int pesel = 0;
        boolean koniec = false;
        do {
            System.out.println("1 dodaj, 2 lista, 3 szukaj, 4 usun, 5 zapisz, 6 koniec");
                    wybor = in.nextInt();
            System.out.println("wybrano: " + wybor);
            switch(wybor) {
                case 1 : // Tworzymy nowy obiekt ---- WAŻNE
                    os = new Osoba();
                    os.wczytaj();
                    mybaza.dodaj(os);
                    break;
                case 2 : mybaza.wyswietl();
                    break;
                case 3 : System.out.println("Szukaj podaj pesel: ");
                    pesel = in.nextInt();
                    mybaza.szukaj(pesel);
                    break;
                case 4 : System.out.println("Usun podaj pesel: ");
                    pesel = in.nextInt();
                    mybaza.usun(pesel);
                    break;
                case 5 : // Zapis na dysk --------
                    mybaza.zapisz();
                    break;
                case 6 : System.out.println("Koniec");
                    koniec = true;
                    break ;
            }
        } while(koniec == false);
        // Zapisujemy by nie zgineło ----
        mybaza.zapisz();
        System.out.println("Koniec");

        return;
    }
}