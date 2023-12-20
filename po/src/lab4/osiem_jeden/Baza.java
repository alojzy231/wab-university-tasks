package lab4.osiem_jeden;

class Baza {
    int lelem; // aktualna liczba elementow tablicy
    int koniec; // indeks ostatniego elementu
    int tabSize;
    Osoba[] osobaTab;
    public Baza(int size) { // Konstruktor
        System.out.println("Konstruktor baza, size: " + size);
        this.tabSize = size;
        this.osobaTab = new Osoba[size];
        this.lelem = 0;
        this.koniec = 0;
    }
    void dodaj() {
        // Dodaj nową osobę do bazy
        // Uzupełnić
        this.osobaTab[koniec] = new Osoba();
        this.osobaTab[koniec].wczytaj();
        this.koniec++;
        this.lelem++;
    }
    int szukaj(int pesel) {
        // Szukaj osoby o peselu pesel
        // Uzupełnić
        for(int index = 0; index < this.lelem; index++){
            if(this.osobaTab[index].dajPesel() == pesel){
                this.osobaTab[index].wyswietl();
                return 1;
            }
        }

        return 0;
    }
    void lista () {
        // Drukuj liste osob ----------------
        // Uzupełnić
        for(int index = 0; index < this.lelem; index++){
            this.osobaTab[index].wyswietl();
        }
    }
    public int usun(int pesel) {
        for (int index = 0; index < this.lelem; index++) {
            if (this.osobaTab[index].dajPesel() == pesel) {
                this.osobaTab[index] = null;
                this.lelem--;
                this.koniec--;

                return 1;
            }
        }
        return 0;
    }
}