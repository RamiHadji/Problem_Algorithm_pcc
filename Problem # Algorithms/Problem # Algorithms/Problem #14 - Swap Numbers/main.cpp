#include <iostream>
using namespace std;
int main() {
  int Number1, Number2, temp;
  
  cout << "╔═════════════════════════════════╗" << endl;
  cout << "║      Number Reversal Program    ║" << endl;
  cout << "╚═════════════════════════════════╝" << endl;

  cout << "Enter the first number: ";
  cin >> Number1;

  cout << "Enter the second number: ";
  cin >> Number2;

    cout << "Original numbers: " << Number1 << ", " << Number2 << endl;

  temp = Number1;
  Number1 = Number2;
  Number2 = temp;
    cout << "Reversed numbers: " << Number1 << ", " << Number2 << endl;

  return 0;
}