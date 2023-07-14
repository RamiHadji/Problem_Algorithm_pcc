#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void ReadNumber(float& A, float& B, float& C)
{
  cout << "Please Enter the Isosceles Triangle A: ";
  cin >> A;
  cout << "Please Enter the Isosceles Triangle B: ";
  cin >> B;
  cout << "Please Enter the Isosceles Triangle C: ";
  cin >> C;
}

float CircleAreaInscribedinanIsoscelesTriangle(float A, float B, float C)
{
  const float PI = 3.14;
  float p = (A + B + C) / 2;
  float T = (A * B * C) / (4 * sqrt(p * (p - A) * (p - B) * (p - C)));
  float Area = PI * pow(T, 2);
  return Area;
}

void PrintResult(float Area)
{
  cout << "Circle Area = " << Area << endl;
}

int main() {
  float A, B, C;
  
  ReadNumber(A, B, C);
  float area = CircleAreaInscribedinanIsoscelesTriangle(A, B, C);
  PrintResult(area);
  
  return 0;
}
