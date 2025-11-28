#include <iostream>
using namespace std;

int main() {
    int szer, wys;
    cout << "Podaj szerokosc: ";
    cin >> szer;
    cout << "Podaj wysokosc: ";
    cin >> wys;

    for (int i = 0; i < wys; i++) {
        for (int j = 0; j < szer; j++) {

            // górny i dolny wiersz
            if (i == 0 || i == wys - 1) {
                cout << "-";
            }
            // boki
            else if (j == 0 || j == szer - 1) {
                cout << "|";
            }
            // wnętrze
            else {
                if ((i + j) % 2 == 0)
                    cout << "#";
                else
                    cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
