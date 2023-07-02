#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadNumbers(float& R) {
  cout << "Please Enter the radius of the circle :-)" << endl;
  cin >> R;
}

float CircleAreaByRadius(float R) {
  const float PI = 3.14;
  float Area = PI * pow(R, 2);
  return Area;
}

void PrintResult(float Area) {
  cout << "\nCircle Area = " << Area << endl;
}

int main() {
  float R;
  ReadNumbers(R);
  PrintResult(CircleAreaByRadius(R));
}
