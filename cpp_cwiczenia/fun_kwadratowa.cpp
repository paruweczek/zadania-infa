#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

string funkcja(double a, double b, double c){
    if (a == 0) {
        return ("Wklepales liniowom mily czlowieku");
    }
    float delta = b*b-4*a*c;

    if (delta < 0) {
        return("Brak rozwiazan");

    }else if (delta == 0){
        float x1 = delta / (2*a);
        string wynik = "Delta = 0, rozwiazanie jest rowne" + to_string(x1);
        return(wynik);
    }else {
        float sqrt_delta = sqrt(delta);
        float x1 = (-b-sqrt_delta) / 2*a;
        float x2 = (-b+sqrt_delta) / 2*a;
        string wynik = "Delta > 0, rozwiazania sa rowne: x1=" + to_string(x1) + " i x2=" + to_string(x2);
        return (wynik);
    }

}

int main() {
    double a,b,c;
    cout << "\nPodaj a funkcji kwadratowej: ";
    cin >> a;
    cout << "\nPodaj b funkcji kwadratowej: ";
    cin >> b;
    cout << "\nPodaj c funkcji kwadratowej: ";
    cin >> c;
    cout << funkcja(a,b,c);
}
