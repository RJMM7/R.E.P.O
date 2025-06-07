#include <iostream>
using namespace std;

int main () {

    // Declaro mi variable con el arreglo y los elementos que va a contener
    int numeros[] = {1, 6, 8, 20, 14, 27, 24};

    // Declaro las variables de menor y mayor el cual iniciaran en la posicion numero 0 del arreglo original
    int numeroMenor = numeros[0];
    int numeroMayor = numeros[0];

    // Se ejecuta la funcion for, el cual iniciara en 1, va a terminar cuando llegue al limite del arreglo original y va a ir en incremento.
    for (int i = 1; i <= numeros[i]; i++) {

        // Si el arreglo es menor que el numero menor en la posicion 0, entonces el numero menor es igual al arreglo original pero en su posicion mas baja
        if (numeros[i] < numeroMenor) {
            numeroMenor = numeros[i];
        }

        // Si el arreglo es mayor que el numero mayor en la posicion 0, entonces el numero mayor es igual al arreglo original pero en su posicion mas alta
        if (numeros[i] > numeroMayor) {
            numeroMayor = numeros[i];
        }
    }

    // Se manda a imprimir el resultado del numero menor y mayor
    cout << "======================================" << endl;
    cout << "El numero menor en el arreglo es: " << numeroMenor << endl;
    cout << "El numero mayor en el arreglo es: " << numeroMayor << endl;
    cout << "======================================" << endl;


    return 0;
}