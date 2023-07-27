#include <iostream>

using namespace std;

int ReadNumber(int& Number){
    cout << "Enter the target number: ";
    cin >> Number;
    return Number;
}

int VerifyTheNumber(int Number){
    while(Number % 2 != 0){
        Number = Number + Number;
    }
    return Number;
}

int SumOddNumber(int Number) {
    int Sum = 0;
    int i = 1; // بدء i من القيمة 1
    while (i <= Number) { 
        Sum += i;
        i += 2; // زيادة i بمقدار 2 بدلاً من 1 للحصول على الأعداد الفردية
    }
    return Sum;
}

int main() {
    int Number;
    ReadNumber(Number);
    int verifiedNumber = VerifyTheNumber(Number);
    int sumOdd = SumOddNumber(verifiedNumber);
    cout << "The verified number is: " << verifiedNumber << endl;
    cout << "The sum of odd numbers from 1 to the verified number is: " << sumOdd << endl;
    return 0;
}
