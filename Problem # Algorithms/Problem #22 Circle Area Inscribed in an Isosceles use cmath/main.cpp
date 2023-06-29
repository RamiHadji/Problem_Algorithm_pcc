#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double Area, Base, Leg;
  
  const double PI = 3.14;
  
  

  
cout << "Enter the number of the base of the isosceles triangle: " <<endl;
  cin >> Base;
  
  cout << "Enter the side number of the isosceles triangle : " << endl;
  cin >> Leg;
  
  Area = (PI * pow(Base,2) / 4) * 
    ( ((2 * Leg ) - Base) )/ ( ((2 * Leg ) + Base) );
  cout << Area << endl;
}