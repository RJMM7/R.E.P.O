#include <iostream>

using namespace std;

int main () {

    // Se declara la variable a usar
    int opcion;

    // Se le presentan las opciones
    cout << "===============================" << endl;
    cout << "1. Car" << endl;
    cout << "2. Motorcycle" << endl;
    cout << "3. Bicycle" << endl;
    cout << "===============================" << endl;

    // El usuario debe de elegir la opcion
    cout << "To see the description of each" << endl;
    cout << "vehicle please select an option: ";
    cin >> opcion;
    cout << "===============================" << endl;

    // Se crea el switch con la variable opcion
    switch (opcion) {

        // Se crean 3 casos para las 3 opciones que se plantean
        case 1:
            cout << "Description:" << endl;
            cout << "- It has 4 wheels" << endl;
            cout << "- It has a manual transmission" << endl;
            cout << "- The paint is green" << endl;
            cout << "- It is a Kia Soul" << endl;
            cout << "===============================";
            break;

        case 2:
            cout << "Description:" << endl;
            cout << "- It has two wheels" << endl;
            cout << "- It is standard" << endl;
            cout << "- The use of a helmet is mandatory" << endl;
            cout << "- It is a Honda" << endl;
            cout << "===============================";
            break;

        case 3:
            cout << "Description:" << endl;
            cout << "- It has two wheels" << endl;
            cout << "- It doesn't pollute the environment" << endl;
            cout << "- Its a BMX" << endl;
            cout << "- It is a BMX" << endl;
            cout << "===============================";
            break;
            
        // El default es por si el usuario digita una opcion que no esta prevista
        default:
            cout << "No esta en las opciones." << endl;
            cout << "===============================";
            break;
    }

    // Fin del programa
    return 0;
}