#include <iostream>
using namespace std;

void ReadNumber(int& number) {
    cout << "Enter Number ATM PIN: ";
    cin >> number;
}

void AtmPIN(int number) {
    int correctPIN = 1234;
    int attempts = 2;
    
    while (attempts > 0) {
        if (number == correctPIN) {
            cout << "Your Balance is: 7500" << endl;
            return;
        } else {
            cout << "Incorrect ATM PIN! " << attempts - 1 << " attempts left. Try again." << endl;
            ReadNumber(number);
            attempts--;
        }
    }
    cout << "Card is locked!" << endl;
}

int main() {
    int number;
    ReadNumber(number);
    AtmPIN(number);

    return 0;
}
