#include <iostream>

using namespace std;

int main () {

    double grade;

    cout << "Type your grade: ";
    cin >> grade;

    if (grade >= 90 && grade <= 100) {
        cout << "You got an A";
    } else if (grade >= 80 && grade < 90) {
        cout << "You got a B";
    } else if (grade >= 70 && grade < 80) {
        cout << "You got a C";
    } else if (grade >= 60 && grade < 70) {
        cout << "You got a D";
    } else if (grade < 60 && grade >= 0) {
        cout << "You got a F";
    } else {
        cout << "Invalid grade";
    }

    return 0;
}