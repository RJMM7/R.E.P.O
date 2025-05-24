#include <iostream>

using namespace std;

int main () {

    int year;
    
    cout << "Type a year: "; cin >> year;

    if (year % 4 != 0) {
        cout << "Not a leap year";
    } else if (year % 400 == 0) {
        cout << "Leap day";
    } else if (year % 100 == 0) {
        cout << "Not a leap year";
    } else {
        cout << "Leap year";
    }

    return 0;
}