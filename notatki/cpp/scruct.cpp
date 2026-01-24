#include <iostream>
#include <string>
using namespace std;
// structy to long story short array ale ze zmienne mogą byc roznego typu
// to jest fajne jak chcesz w 1 dziadostwie pomiescic wiele zmiennych zeby ci sie nie jebały 


// structy nazwane polegaja na tym ze zeby utwozyc konkretnego structa trzeba najpierw wywolac nazwe
int main() {
    struct uczen // nazwa structa 
    { // argumenty
        string imie;
        string nazwisko;
        int klasa;
        string profil;
        int rokUrodzeia;
        int uwagi;
    };
// wywolanie structa i nadanie mu wartosci        
    uczen antek;
    antek.imie = "Antoni";
    antek.nazwisko = "Pierwiastek";
    antek.klasa = 3;
    antek.profil = "informatyczna";
    antek.rokUrodzeia = 2009;
    antek.uwagi = 3;


    cout << "Informacje o uczniu" << endl;
    cout << "Imię i nazwisko: " << antek.imie << " " << antek.nazwisko << endl;
    cout << "Klasa: " << antek.klasa << " " << antek.profil << endl;
    cout << "Rok urodzenia: " << antek.rokUrodzeia << endl;
    cout << "Ilosc uwag: " << antek.uwagi << endl;

    // structy nie nazwane to mniej wiecej to samo tylko (jak w naszym przykladie) uczniow wywolujesz podczas structa 
    struct {
        int rokUro;
        string imie;
        bool karany;
        double liczbapi;
    } kamil; // mozna dac wiecej po , np } kamil, janek, ... , asia;
    // tu nie trzeba wywolywac bo juz to zrobilismy wyzej i tylko nadajemy wartosci
    kamil.rokUro = 2009;
    kamil.imie = "kamil";
    kamil.karany = true; // parsowanie zwroci wartosc 0 lub 1 a nie true lub false
    kamil.liczbapi = 3.1415;
    
    cout << endl << endl << "kamil"<< endl;
    cout << "imie: " << kamil.imie<< endl;
    cout << "uro: " << kamil.rokUro<< endl;
    cout << "liczba pi: " << kamil.liczbapi<< endl;
    cout << "karany: " << kamil.karany<< endl;
  return 0;
}
