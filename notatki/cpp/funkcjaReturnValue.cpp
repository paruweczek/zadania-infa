#include <iostream>
#include <string>
using namespace std;

// return w funkcjach dziala tak ze jak wezwiemy sobie nasza funkcje 
// to ona nam zwraca dana wartosc ktora mozemy potem uzyc jak nam sie podoba
int dodawanie(int x){
	// tu wlasnie dajemy ze funkcja zwraca nam parametr x + 5
	return x + 5;  // uzycie w funkcji main w liniach 20-23
}

// mozna jako argument podac rowniez tablice i na niej operowac
void mnozenie(int arr[5]){
	for(int i =0; i<5; i++ ){
	arr[i] +=5;	// mnozymy kazdy element naszej tablicy razy 5
	}
}// uzycie w funkcji main w liniach 25-32

int main(){
	// jak przyzwiemy funkcje to mozemy uzyc output z niej
	cout << "20 + 5 = "<<dodawanie(20) << endl;
	int y = dodawanie(8);
	cout << "8 + 5 = "<< y << endl;

	cout << endl << "elementy w tablicy:" << endl;
    	int tablica[5]={1,2,3,4,5}; // twozymy tablice na ktorej chcemy wykonac funkcje

	mnozenie(tablica); // dajemy tablice jako argument funkcji mnozenie
			   // i wypisujemy kazdy element tablicy 
	for(int i=0; i<5;i++){
	cout << tablica[i] << " ";
	}
	return 0;
}
