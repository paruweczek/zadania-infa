#include <iostream>
#include <string>
using namespace std;

long long silnia(long long liczba){
  if (liczba > 1)
  {
    return liczba * silnia(liczba - 1);
  } else {
    return 1;
  }
  
    

}

int main() {
  cout << "podaj liczbe do silnowania: ";
  long long x;
  cin >> x;
  cout << silnia(x);
  return 0;
}
