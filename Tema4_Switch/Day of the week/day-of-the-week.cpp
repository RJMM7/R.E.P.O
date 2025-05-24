#include <iostream>

using namespace std;

int main () {

    int day;

    cout << "Type any number from 1 o 7: "; cin >> day;

    if (day < 1 || day > 7) {
        cout << "Invalid number";
    } else {
        switch (day) {
            case 1:
                cout << "It is Monday";
                break;
            case 2:
                cout << "It is Tuesday";
                break;
            case 3:
                cout << "It is Wednesday";
                break;
            case 4:
                cout << "It is Thursday";
                break;
            case 5:
                cout << "It is Friday";
                break;
            case 6:
                cout << "It is Saturday";
                break;
            case 7:
                cout << "It is Sunday";
                break;
            default:
                break;
        }
    }

    return 0;
}