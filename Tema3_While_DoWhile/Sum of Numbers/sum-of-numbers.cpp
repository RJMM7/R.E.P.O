#include <iostream>

using namespace std;

int main () {

    int numero, suma = 0;

    do {
        cout << "Por favor digite un numero entero cualquiera. Si digita 0, entonces el bucle se termina: ";
        cin >> numero;

        suma = suma + numero;

    } while (numero != 0);

    cout << "La suma de todos los numeros es: " << suma;


    return 0;
}