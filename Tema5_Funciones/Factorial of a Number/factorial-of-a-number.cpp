#include <iostream>
using namespace std;

int factorial (int number) {
    int resultado = 1;
    for (int i = 1; i <= number; i++) {
        resultado = resultado * i;
    }

    return resultado;
}

int main() {
    
    int a;

    cout << "Please, type a positive number: ";
    cin >> a;

    cout << "El factorial de ese numero es: " << factorial(a);

    return 0;
}