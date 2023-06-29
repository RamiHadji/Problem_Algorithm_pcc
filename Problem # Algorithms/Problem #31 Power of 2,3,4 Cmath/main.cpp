#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float Number;
  
  cout << "Enter a number: ";
  cin >> Number;
  
  float square = pow(Number, 2);
  cout << "Square: " << square << endl;
  
  float cube = pow(Number, 3);
  cout << "Cube: " << cube << endl;
  
  float fourthPower = pow(Number, 4);
  cout << "Fourth Power: " << fourthPower << endl;
  
  return 0;
}
