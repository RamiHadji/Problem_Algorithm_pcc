#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float RectangleAreaBySideAndDiagonal(float A, float D) {
  float Area = A * sqrt(pow(D, 2) - pow(A, 2));
  return Area;
}

void ReadNumbers(float& A, float& D) {
  cout << "Please write your Number1 here  :-)" << endl;
  cin >> A;

  cout << "Please write your Number2 here  :-)" << endl;
  cin >> D;
}

void PrintResult(float Area) {
  cout << "\nRectangle Area = " << Area << endl;
}

int main() {
  float A, D;
  ReadNumbers(A, D);

  PrintResult(RectangleAreaBySideAndDiagonal(A, D));

  return 0;
}
