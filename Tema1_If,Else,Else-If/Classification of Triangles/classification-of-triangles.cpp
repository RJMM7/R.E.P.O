#include <iostream>

using namespace std;

int main () {

    double side1, side2, side3;

    cout << "Welcome to the program that determines the triangle depending on the sides you type" << endl;
    cout << "Please type your first side: ";
    cin >> side1;
    cout << "Please type your second side: ";
    cin >> side2;
    cout << "Please type your third side: ";
    cin >> side3;

    if (side1 == side2 && side2 == side3) {
        cout << "Is a equilateral triangle";
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        cout << "Is a isosceles triangle";
    } else {
        cout << "Is a scalene triangle";
    }

    return 0;
}