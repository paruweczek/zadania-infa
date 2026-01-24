#include <iostream>
#include <string>
#include <thread> 
#include <chrono> // (ostatnie 2 include sa tylko po to zeby kara na uzytkownika mogla dzialac) 
using namespace std;
//  koontynuacja pointerów, polecam sie zapoznac z komentarzami w pliku pointer.cpp


int main() {
    // tu sie twozy zmienna która ustala ile gości przyjmiemy w hotelu
  int iloscGosci;
  cout << "Ilosc gosci: ";
  cin >> iloscGosci;

  // wylapywanie debili
  if (iloscGosci <= 0) {
    cout << "tempa pizdo jak po chuj ty 0 wpisujesz" << endl;
    std::this_thread::sleep_for(std::chrono::minutes(10));  // kara dla użytkownika za wpisanie 0 (kompletnie zbedne ale mnie bawi XD)
    return 0;
  }
  // udupienie wolnej amerykanki uzytkownika na wprowadzanie czegokolwiek
  cin.ignore();


  // tworzenie pointera do tablicy o rozmiarze podanej przez usera (nazwe rozpoczalem od "p" zeby wiedziec ze to pointer, polecam fajny trick) 
  string* pGoscie = new string[iloscGosci];

  // for loop na wprowadzanie imion gosci
  for (int i = 0; i < iloscGosci; i++) {
    cout << "Wpisz Imie i Nazwisko goscia nr. " << (i + 1) << ": ";
    getline(cin, pGoscie[i]);
  }
    // getline to takie fajne cacko które czyta ci cokolwiek wprowadzisz, taki troche lepszy cin
    // jak chcesz wiedziec wiecej to https://www.algorytm.edu.pl/biblioteki/string/getline.html
  
  // wypisanie wszystkich gosci 
  cout << endl << "Lista gosci:" << endl;
  for (int i = 0; i < iloscGosci; i++) {
    cout << pGoscie[i] << "\n";
  }
  // usuniecie pointera do tablicy goscie zeby zwolnic miejsce w ramie 
  //    \/ to tez jest wazne bo jak usuwaz zwykły pointer to nie dajesz [] a jak to jest tablica to musisz dac []
  delete[] pGoscie; 
  return 0;
}