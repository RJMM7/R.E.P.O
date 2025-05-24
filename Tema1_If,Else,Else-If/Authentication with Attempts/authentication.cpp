#include <iostream>

using namespace std;

int main () {

    string username, correctUser;
    int password, correctPass, attempts;

    correctUser = "rodrigo";
    correctPass = 123;
    attempts = 0;

    cout << "Welcome to the platform" << endl;
    cout << "-----------------------" << endl;

    // Intento numero 1  --------------------------
    cout << "Type your username: "; cin >> username;
    cout << "Type your password: "; cin >> password;

    if (username == correctUser && password == correctPass) {
        cout << "Welcome, " << correctUser << "!";
    } else {
        cout << "Invalid credentials, please try again. Attempts: 1 out of 3" << endl;

        // Intento numero 2 --------------------------
        cout << "Type your username: "; cin >> username;
        cout << "Type your password: "; cin >> password;

        if (username == correctUser && password == correctPass) {
            cout << "Welcome, " << correctUser << "!";
        } else {
            cout << "Invalid credentials, please try again. Attempts: 2 out of 3" << endl;

            // Intento numero 3 --------------------------
            cout << "Type your username: "; cin >> username;
            cout << "Type your password: "; cin >> password;

            if (username == correctUser && password == correctPass) {
                cout << "Welcome, " << correctUser << "!";
            } else {
                cout << "Invalid credentials. Attempts: 3 out of 3. Too many failed attempts" << endl;
            }
        }
    }

    
    
    return 0;
}