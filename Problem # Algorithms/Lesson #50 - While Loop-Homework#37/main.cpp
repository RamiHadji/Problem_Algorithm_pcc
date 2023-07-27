#include <iostream>
using namespace std;

int ReadNumber() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

int SumPositiveNumbers() {
    int number;
    int sum = 0;
    do {
        number = ReadNumber();
        if (number > 0) {
            sum += number;
        }
    } while (number != -99);

    return sum;
}

int main() {
    int sum = SumPositiveNumbers();
    cout << "The sum of positive numbers is: " << sum << endl;
    return 0;
}
