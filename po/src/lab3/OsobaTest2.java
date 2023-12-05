package lab3;

public class OsobaTest2 {
    public static void main(String[] args) {
        final int MaxTab = 3;

        // Utworzenie tablicy osób
        Osoba[] osobaTab = new Osoba[MaxTab];

        // Wczytywanie osób --------
        for(int index=0;index<MaxTab;index++) {
            osobaTab[index] = new Osoba();
            osobaTab[index].wczytaj();
        }

        // Wypisywanie osób --------
        for(int index=0;index<MaxTab;index++) {
            osobaTab[index].wyswietl();
        }
    }
}