#include <iostream>
using namespace std;

int main () {

    cout << "Countdown:";
    
    //Inicializo la variable con el valor de 10, luego digo que pare hasta que sea mayor o igual que 0, luego le digo que vaya en de menos en menos. Para finalizar mando a imprimir la variable i.
    for (int i = 10; i >= 0; --i) {
        cout << i << " ";
    }

    return 0;
}