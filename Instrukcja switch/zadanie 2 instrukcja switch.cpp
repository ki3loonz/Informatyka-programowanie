#include <iostream>
using namespace std;

int main() {
    double celsius;
    char jednostka;

    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> celsius;

    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> jednostka;

    switch(jednostka) {
        case 'K':
            cout << "Temperatura w Kelwinach: " << celsius + 273.15 << endl;
            break;

        case 'F':
            cout << "Temperatura w stopniach Fahrenheita: " << (celsius * 9 / 5) + 32 << endl;
            break;

        default:
            cout << "Nieznana jednostka! Wybierz K lub F." << endl;
            break;
    }

    return 0;
}
