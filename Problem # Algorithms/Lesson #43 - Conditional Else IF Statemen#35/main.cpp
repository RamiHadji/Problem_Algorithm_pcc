#include <iostream>
using namespace std;

void ReadNumbers(float& Number1, float& Number2) {
  cout << "Enter number1: ";
  cin >> Number1;
  cout << "Enter number2: ";
  cin >> Number2;
}

void ReadOperator(char& Operator) {
  cout << "Enter Operator: ";
  cin >> Operator;
}

void Calculate(float Number1, float Number2, char Operator) {
  switch (Operator) {
    case '*':
      cout << "Calculate = " << Number1 * Number2 << endl;
      break;
    case '+':
      cout << "Calculate = " << Number1 + Number2 << endl;
      break;
    case '/':
      if (Number2 != 0) {
        cout << "Calculate = " << Number1 / Number2 << endl;
      } else {
        cout << "Cannot divide by zero!" << endl;
      }
      break;
    case '-':
      cout << "Calculate = " << Number1 - Number2 << endl;
      break;
    default:
      cout << "Invalid operator!" << endl;
  }
}

int main() {
  float Number1, Number2;
  char Operator;

  ReadNumbers(Number1, Number2);
  ReadOperator(Operator);
  Calculate(Number1, Number2, Operator);

  return 0;
}
