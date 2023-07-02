#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadNumber(float& D)
{
  cout << "Please Enter the Diameter of the circle :-)" << endl;
  cin >> D;
}
float CircleAreaThroughDiameter(float D){
  const float PI = 3.14;
  float Area = (PI * pow(D,2)) / 4;
  return Area;
}

void PrintResult(float Area){
  cout << "\nCircle Area = " << Area << endl;
}

int main() {
  float D;
  ReadNumber(D);
  PrintResult(CircleAreaThroughDiameter(D));
}