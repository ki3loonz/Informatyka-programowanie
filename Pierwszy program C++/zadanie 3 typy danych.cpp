#include <iostream>
using namespace std;

int main() {
    int i = 10;
    float f = 3.14;
    char c = 'A';
    bool b = true;

    cout << boolalpha; // włączamy wyświetlanie bool jako true/false

    cout << "Zmienna całkowita: " << i << "\n"
         << "Zmienna zmiennoprzecinkowa: " << f << "\n"
         << "Zmienna znakowa: " << c << "\n"
         << "Zmienna logiczna: " << b << endl;

    return 0;
}
