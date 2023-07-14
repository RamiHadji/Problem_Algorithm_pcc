#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadNumber(float& A, float& B)
{
  cout << "Please Enter the Isosceles Triangle: "<< endl;
  cin >> A;
  cout << "Please Enter the Isosceles Triangle: "<< endl;
  cin >> B;
}
float CircleAreaInscribedinanIsoscelesTriangle(float A, float B)
{
  const float PI = 3.14;
  
  float Area = (PI * pow(B, 2) / 4) * (2 * A - B) / (2 * A + B);


  return Area;
}
float CircleAreacircleDescribedAroundanArbitraryTriangle()
void PrintResult(float Area)
{
  cout << "\nCircle Area = " << Area << endl;
}
int main() {

  float A, B;
  ReadNumber(A, B);
    PrintResult(CircleAreaInscribedinanIsoscelesTriangle(A, B));
    
  
}