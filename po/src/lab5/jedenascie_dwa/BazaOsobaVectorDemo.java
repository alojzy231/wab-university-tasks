package lab5.jedenascie_dwa;

public class BazaOsobaVectorDemo {
    public static void main(String args[]) {
        System.out.println("Start");
        Osoba os1 = new Osoba("Jan","Kowal",1);
        Osoba os2 = new Osoba("Wanda","Maj",2);
        Osoba os3 = new Osoba("Ewa","Gaj",3);
        Osoba os4 = new Osoba("Zenon","Hak",4);
        Osoba os = new Osoba();
        // Osoba os2 = new Osoba();
        os1.wyswietl();
        os2.wyswietl();
        os3.wyswietl();
        // Tworzymy baze ------
        Baza mybaza = new Baza();
        // dodajemy elementy
        mybaza.dodaj(os1);
        mybaza.dodaj(os2);
        mybaza.dodaj(os3);
        mybaza.wyswietl();
        mybaza.szukajPesel(2);
        mybaza.usun(2);
        mybaza.wyswietl();
    }
}