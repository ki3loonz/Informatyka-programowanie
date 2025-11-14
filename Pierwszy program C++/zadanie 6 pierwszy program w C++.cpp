#include <iostream>

using namespace std;

int main() {

  
  cout << "6. Laczenie zagadnien" << endl;
    int a, b, suma;
    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> a;
    cout << "Podaj druga liczbe: " << endl;
    cin >> b;
    suma = a + b;
    cout << "Suma: " << suma << endl;
    if (suma % 2 == 0)
        cout << "Suma jest liczba parzysta." << endl;
    else
        cout << "Suma jest liczba nieparzysta." << endl;

    return 0;
}
