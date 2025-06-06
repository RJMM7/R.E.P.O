#include <iostream>

using namespace std;

int main () {

    // Se declara la varibale en la que se va a guarda la opcion
    int opcion;

    // Codigo que queremos que se repita
    do {
        cout << "======MENU======" << endl;
        cout << "|1. Computer.   |" << endl;
        cout << "|2. Desk.       |" << endl;
        cout << "|3. Chair.      |" << endl;
        cout << "|4. Mouse.      |" << endl;
        cout << "|5. Exit.       |" << endl;
        cout << "================" << endl;

        // Se le pide al usuario que digite una opcion
        cout << "Please select an option (remember that if you choose option 5 the loop ends): ";
        cin >> opcion;

    // El codigo de arriba se seguira ejecutando hasta que esta condicion ya no se cumpla
    } while (opcion != 5);
    

    return 0;
}