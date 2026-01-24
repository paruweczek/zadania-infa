#include <iostream>
#include <string>
using namespace std;

int main() {
    // enum to takie gówno ze mozesz zrobic zmienna której nie mozna zmienic (taki ala const) i przypisac jej wartosc która mozna uzywac zaminennie
    // fajne jest to jak jakas rzecz przyjmuje tylko na input int a dzieki temu mozesz dac staly string
    enum dni_tygodnia {
        monday = 0,
        tuesday = 1,
        wednstday = 2,
        thursday = 3,
        friday = 4,
        saturday = 5,
        sunday = 6
    };
    // przypisanie zmiennej dzis typu dni_tygodnia i nadanie jej wartosci friday
    dni_tygodnia dzis = friday;
    switch(dzis){
    case 0:
        cout << "poniedzialek";
    break;
    case 1: 
        cout << "wtorek";
    break;
    case 2:
        cout << "sroda";
    break;
    case 3:
        cout << "czwartek";
    break;
    case 4:
        cout << "piatek";
    break;
    case 5:
        cout << "sobota";
    break;
    case 6:
        cout << "niedziela";
    break;
    }



    return 0;
}