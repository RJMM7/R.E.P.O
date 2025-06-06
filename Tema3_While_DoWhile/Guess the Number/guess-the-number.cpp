#include <iostream>

using namespace std;

int main () {

    int correctNumber = 67;
    int guess;

    do {
        cout << "===============================" << endl;
        cout << "Guess the number between 1 to 100" << endl;
        cout << "Type your number: ";
        cin >> guess;
        cout << "===============================" << endl;

        if (guess == correctNumber) {
            cout << "Congratulations, you got it right" << endl;
        } else if (guess > correctNumber) {
            cout << "The number you entered is too high, try again" << endl;
        } else {
            cout << "The number you entered is too low, try again" << endl;
        }

    } while (guess != correctNumber);

    return 0;
}