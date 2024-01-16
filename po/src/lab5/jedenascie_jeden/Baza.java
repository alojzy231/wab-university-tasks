package lab5.jedenascie_jeden;

import java.util.Stack;

class Baza {
    Stack<Osoba> tab;

    Baza() // konstruktor
    {
        tab = new Stack();
    }

    // Dodanie osoby os do bazy --------
    int dodaj(Osoba os) {
        tab.push(os);
        return tab.size();
    }

    // Wyswietlenie bazy -----------
    void wyswietl() {
        System.out.println("Wyswietl - elementow: " + tab.size());
        for (Osoba os : tab) {
            System.out.println(os.dajNazwisko() + " " + os.dajImie() + " " + os.dajPesel());
        }
    }

    void usun() {
        while (!tab.empty()) {
            tab.pop();
        }
    }
}
