#include <iostream>

using namespace std;

int ReadNumber(int& Number) {
    cout << "Enter the target number: ";
    cin >> Number;
    return Number;
}

int VerifyTheNumber(int Number) {
    while (Number % 2 != 0) {
        cout << "The number must be even. Please enter an even number: ";
        cin >> Number;
    }
    return Number;
}

int SumEvenNumber(int Number) {
    int Sum = 0;
    int i = 2; // تبدأ من 2 بدلاً من 1 لجمع الأعداد الزوجية
    while (i <= Number) {
        Sum = Sum + i;
        i = i + 2; // تحديث i بمقدار 2 لجمع الأعداد الزوجية
    }
    return Sum;
}

void PrintResults(int verifyTheNumber, int SumEven) {
    cout << "The verified number is: " << verifyTheNumber << endl;
    cout << "The sum of even numbers from 1 to the verified number is: " << SumEven << endl;
}

int main() {
    int Number;
    ReadNumber(Number);
    int verifyTheNumber = VerifyTheNumber(Number);
    int SumEven = SumEvenNumber(verifyTheNumber);
    PrintResults(verifyTheNumber, SumEven);

    return 0;
}
