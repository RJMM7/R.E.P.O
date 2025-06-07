#include <iostream>

using namespace std;

int main () {

    int numeros[] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
    int suma = 0;

    for (int i = 1; i <= 10; i++) {
        suma = suma + i;
    }

    cout << "La suma de todos los numeros es igual a: " << suma;

    return 0;
}