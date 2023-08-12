// zdz_zajecia_12_08_2023.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "telefon.h"


using namespace std;


int main()
{
    Telefon t("Nokia", "3310", 810, 2002);
    cout << t.podsumowanie() << "\n";
    cout << t;
    Telefon t2("Samsung", "S21A");
    cout << t2;
    //Urzadzenie u;
    
    /*Urzadzenie u;
    u.setWaga(145);
    u.setRokProdukcji(2020);
    u.setKolor(Urzadzenie::czarny);
    u.setNazwa("Telefon");
    u.setModel("Komorkowy");
    cout << u.podsumowanie() << "\n";*/
    return 0;
}



// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
