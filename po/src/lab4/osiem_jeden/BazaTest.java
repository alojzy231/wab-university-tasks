package lab4.osiem_jeden;

import java.util.Scanner;

class BazaTest {

    public static void main(String[] args) { // Program testowy
        int wybor,pes;
        final int MaxTab = 10;
        Baza myBaza = new Baza(MaxTab);
        Scanner scan = new Scanner(System.in);

        // Menu ----------------------------
        do {
            System.out.println("1 dodaj, 2 lista, 3 szukaj, 4 usun, 5 koniec");
            wybor = scan.nextInt();
            System.out.println("wybor = " + wybor);
            switch(wybor) {
                case 1: System.out.println("dodaj");
                    myBaza.dodaj();
                    break;
                case 2: System.out.println("lista");
                    myBaza.lista();
                    break;
                case 3: System.out.println("szukaj");
                    System.out.println("Podaj pesel: ");
                    pes = scan.nextInt();
                    myBaza.szukaj(pes);
                    break;
                case 4: System.out.println("usun");
                    System.out.println("Podaj pesel: ");
                    pes = scan.nextInt();
                    myBaza.usun(pes);
                break;
            }

        } while(wybor != 5);
        System.out.println("Koniec");
    }
}
