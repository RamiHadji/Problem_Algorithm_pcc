#include <iostream>
using namespace std;

int Number() {
    int targetNumber;
    cout << "Enter the target number: ";
    cin >> targetNumber;
    return targetNumber;
}

void Curren(int targetNumber) {
    int currentNumber = 1;
    while (currentNumber <= targetNumber) {
        cout << currentNumber << endl;
        currentNumber++;
    }
}

int main() {
    int target = Number();
    Curren(target);
    return 0;
}
