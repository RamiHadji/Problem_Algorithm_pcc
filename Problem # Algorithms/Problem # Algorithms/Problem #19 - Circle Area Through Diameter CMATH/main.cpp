#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double Area, Diameter;
  
  const double PI = 3.14;
  
  cout << " Enter the diameter of the circle : " << endl;
  cin >> Diameter;
  
  Area = (pow(Diameter,2) * PI) / 4 ;
  
  cout << "Circle area = " << Area << endl;
}