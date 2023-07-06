#include <iostream>
#include <string>
using namespace std;

int main() {
  double Number1, Number2;
  
  char Op;
  cout << "Enter Number1: ";
  cin >> Number1;
  cout << "Enter Number2: ";
  cin >> Number2;
  cout << "Enter operator (+, -, *, /): ";
  cin >> Op;
  switch(Op)
    {
      case '+':
      cout << "Number1 + Number2 = "<< Number1 + Number2 << endl;
      break;
      case '-':
      cout << "Number1 - Number2 = "<< Number1 - Number2 << endl;
      break;
      case '*':
      cout << "Number1 * Number2 = "<< Number1 * Number2 << endl;
      break;
      case '/':
      cout << "Number1 / Number2 = "<< Number1 / Number2 << endl;
      break;
      default:
      cout << "Invalid operator!" << endl;
      break;
    }
  
}