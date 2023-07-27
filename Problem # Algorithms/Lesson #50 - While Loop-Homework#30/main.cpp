#include <iostream>
using namespace std;

int ReadNumber(int& Number){
    cout << "Enter the target number: ";
    cin >> Number;
    return Number;
}

int FactorialOfNumber(int Number){
    int factorial = 1;
    int i = 1;
    while (i <= Number) {
        factorial *= i;
        i++;
    }
    return factorial;
}

void PrintResults(int Number, int Factorial) {
    cout << "The number is: " << Number << endl;
    cout << "The Factorial number is: " << Factorial << endl;
}

int main() {
    int Number;
    ReadNumber(Number);
    int Factorial = FactorialOfNumber(Number);
    PrintResults(Number, Factorial);
    return 0;
}
