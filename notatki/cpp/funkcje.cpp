#include <iostream>
#include <string>
using namespace std;
/*
tldr: funkcja fajna, kozystaj jesli mozesz 

funkcje to zajebiscie fajna przydatna wykurwista potrzebna itp. zabawka
ktora pozwala zaoszczedzic nerwy, czas, wielkosc pliku, czytelnosc i prostote budowy
poprzez danie takiej mozliwosci iz piszesz jakis kod raz a potem go wykorzystujesz x razy
i zamiast klepac za kazym razem np 50 lini tego samego, mozesz wjebac to w funkcje 
i wtedy piszesz to raz a wykorzystujesz ile chcesz
w dodatku jak zrobisz blad to musisz w 1 miejscu naprawiac a nie w 20 miejscach
a nawet prosciej taki kod modyfikowac i zrozunmiec
*/

    
//  to jest typ funkcji (podobnie jak zmienne) on definiuje w jakiej postaci funkcja zwraca wartosc
//   |  void to funkcja która nie zwraca wartosci, int to taka która zwraca int, string zwraca string itd.
//   |       to jest nazwa funkcji (tak wiem niesamowite ze mozna to nazwac)
//  \/        \/    \/- jak chcesz miec wiecej niz 1 parametr to poprostu robisz (parametr1, parametr2, ...)  
    void mojaFunkcja(string imie = "brak"){ // jesli przypiszemy naszemu parametrowi wartosc to jak podczas
        //  wywolywania funkcji nie podamy argumentu to poleci argument przypisany jako deafult
        // jako ze to moja pierwsza funkcja to nie bedzie ona zbytnio skąplikowana
        cout << "twoje imie to: "<< imie << endl;
    }

    // teraz dajemy nasza znana funkcje main
    int main(){
        // i teraz mozemy wywołac funkcje
        mojaFunkcja("Maciek"); // jakby nawias był pusty to znaczy ze nie zalaczamy argumentow
        
        // funkcje mozna wywolac ile razy sie chce
        // przy okazj uzyjemy deafultowego ustawionego argumentu
        mojaFunkcja();

        return 0;

        // jako ze funkcje to dosyc duzy temat to koontynuacja w pliku 
    }