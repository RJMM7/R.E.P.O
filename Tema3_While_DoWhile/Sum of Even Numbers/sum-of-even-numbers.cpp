#include <iostream>
using namespace std;

int main() {
    
    int number;
    int counter = 1;
    int sumaTotal = 0;

    cout << "Please, type any number: ";
    cin >> number;

    while (counter <= number)
    {
        if (counter % 2 == 0) {
            sumaTotal = sumaTotal + counter;
        }
        counter++;
    }

    cout << "La suma de los numeros pares desde 1 hasta " << number << " es: " << sumaTotal;
    
    
    return 0;
}