#include <iostream>
#include <fstream> // Este me permite: abrir, cerrar o guardar archivos
using namespace std;

int main () {

    // Variable a usar
    string message;

    ofstream file; // Se llama la funcion ofstream y se le asigna un nombre al archivo
    file.open("message.txt", ios::app); // Se manda a llamar el archivo que creamos, luego llamamos la funcion .open() y entre comillas va el nombre del archivo que se quiere crear, seguido del tipo de extension que sera el archivo. El ios:app sirve para agregar mas texto sin borrar lo que ya existe

    cout << "===============================================" << endl;
    cout << "Por favor ingrese cualquier mensaje que quiera: ";
    getline(cin, message); // geline permite imprimir cadenas de texto con espacios

    file << message << endl; // El archivo que se crea imprime el mensaje que se escribio


    file.close(); // Se cierra el archivo

    return 0;
}