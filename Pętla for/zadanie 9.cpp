#include <iostream>
using namespace std;

int main() {
    int licznik = 0;

    for (int a = 1; a <= 9; a++) {         // setki
        for (int b = 0; b <= 9; b++) {     // dziesiątki
            for (int c = 0; c <= 9; c++) { // jedności

                if (a != b && a != c && b != c) {
                    cout << a << b << c << endl;
                    licznik++;
                }

            }
        }
    }

    cout << "Liczb bez powtarzajacych sie cyfr: " << licznik << endl;

    return 0;
}
