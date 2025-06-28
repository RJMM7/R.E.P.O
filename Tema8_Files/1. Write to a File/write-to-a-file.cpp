#include <iostream>
#include <fstream> // Este me permite: abrir, cerrar o guardar archivos
using namespace std;

int main () {

    // Variable a usar
    string message;

    ofstream file; // ofstream se inicia con el nombre del archivo
    
    file.open("message.txt", ios::app); // abre el archivo y entre comillas va el nombre del archivo que se quiere crear, seguido del tipo de extension que sera el archivo. El ios:app sirve para agregar mas texto sin borrar lo que ya existe

    cout << "===============================================" << endl;
    cout << "Por favor ingrese cualquier mensaje que quiera: ";
    getline(cin, message); // geline permite imprimir cadenas de texto con espacios

    file << message << endl; // El archivo que se crea imprime el mensaje que se escribio


    file.close(); // Se cierra el archivo

    return 0;
}