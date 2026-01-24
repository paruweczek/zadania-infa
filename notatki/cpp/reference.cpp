#include <iostream>
#include <string>
using namespace std;
// referencja to wsm alijas, przypisujesz druga nazwe do zmiennej, bedzie to potem przydatne do pointerów
// idk co moge powiedziec wiecej, aljas to aljas i tyle XD
int main() {

    string jedzomko = "kotlet";
    string &obiadek = jedzomko;
//        /\ to bardzo wazne bo & to operator utworzenia aljasu i ogolnie bez tego ani rusz 
//                                                                      /\  https://youtu.be/X-zLONp6X1c?si=JNxmCiyeR3cHQ3bu 00:00 - 00:20
    cout << jedzomko << endl;
    cout << obiadek << endl;

// aljas zachowuje sie tak samo jak normalna zmnienna
    obiadek = "hotdog";

    cout << "po zmianach" << endl;
    cout << jedzomko << endl;
    cout << obiadek << endl;

// orginalna zmienna dalej działa
    jedzomko = "burgir";
    cout << "po zmianach x2" << endl;
    cout << jedzomko << endl;
    cout << obiadek << endl;

    return 0;
}