#include <iostream>
using namespace std;

int main () {

    int height;

    cout << "Type the height of the pyramid: ";
    cin >> height;

    // Este for se encarga de contar las filas que va a tener
    for (int i = 1; i <= height; i++) {

        // Este for es para imprimir los espacios
        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }

        // Este for es para imprimir los asteriscos
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}