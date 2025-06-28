#include <iostream>
using namespace std;

bool parImpar (int numero) {
    if (numero % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    
    int a;

    cout << "Type any number: ";
    cin >> a;

    if (parImpar(a)) {
        cout << "True";
    } else {
        cout << "False";
    }
    
    return 0;
}