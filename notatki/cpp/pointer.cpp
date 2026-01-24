#include <iostream>
#include <ctime>
using namespace std;

// pointer to basicly zmienna która przechowywuje adres innej zmiennej
// wykozystuje sie do do pojebanych rzeczy ale idk trudne to i wgl mi sie to nie podoba

int main() {
    string food = "Pizza";
    string* ptr = &food;
    //   /\       /\  & znaczy ze chodzi o adres zmiennej a nie wartosc 
    //    gwiazdka znaczy ze utworzona zmienna to pointer
    
    // nasza zmienna food dalej zostaje i nic sie z nia nie dzieje
    cout << food << endl;
    // dajac & mozna wyświetlic/ uzyc adresu zamiast wartosci zmiennej
    cout << &food << endl;

    // pointer który tak o wyświetlimy przechowywuje w sobie adres zmiennej 
    cout << ptr << endl;
    // za pomoca gwiazdki mozna grzecznie poprosic pana Bjarne Stroustrup 
    // zeby zamiast adresu wyświetlic wartosc zmiennej
    cout << *ptr << endl;

    cout << endl << "zmiana wartosci" << endl;
    // tak samo mozna jak przy zwyklych zmiennych zmieniac jej wartosc
    *ptr = "burgir";
    // gwiazdka jest potrzebna bo modyfikujesz wartosc pod danym adresem a nie adres sam w sobie
    
    cout << food << endl;
    cout << *ptr << endl;

    cout << endl << "dodawanie i usuwanie" << endl;
    // keyword new basicly robi pointer do adresu w pamieci do której nie jest przypisana żadna zmienna
    // tzn jak w klasycznym wykozystaniu pointera (wyzej) pointer wskazywał adres zmiennej
    // to tu pointer wskazuje adres w pamieci do którego nei jest przypisana zadna zmienna poza pointerem
    // plus mozna je poza tworzeniem usuwac co daje wsm duzo mozliwosci ale duzo miejsc na wyjebanie sie na krzywy ryj
    // dzieki temu mozna np twozyc array (tablice) która nie jest z góry ograniczona wielkościa 
    // (bedzie to w osobnym pliku "dynamicArray.cpp"bo to za długie jest na ten program)

//      \/ gwiazdka do utworzenia pointera
    int* ptr = new int;
//             /\ stwozenie pointera który wskazuje na sam adres bez zadnej zmiennej

//    \/ przypisanie 35 do pod adresem wskazywanego przez naszego pointera 
    *ptr = 35;
//      \/  wyswietlenie tej wartosci
    cout << *ptr;
// a jak skonczymy kozystac z pointera mozna go poprostu usunac (gone, reduced to atoms)
    delete ptr;

    return 0;
}
