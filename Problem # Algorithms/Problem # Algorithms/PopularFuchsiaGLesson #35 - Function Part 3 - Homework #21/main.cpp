#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadNumber(float& L)
{
  cout << "Please Enter the a Square of the Inscribed  :-)" << endl;
  cin >> L;
}
float CircleAreaAlongtheCircumference(float L){
  const float PI = 3.14;
  float Area = pow(L,2) / (PI * 4);
  return Area;
}

void PrintResult(float Area){
  cout << "\nCircle Area = " << Area << endl;
}

int main() {
  float L;
  ReadNumber(L);
  PrintResult(CircleAreaAlongtheCircumference(L));
}