#include <cmath>
#include <iostream>

using namespace std;


int main() {
  
  double Base, Perpendicular, Area, A, B;

cout << "Calculating the area of a right-angled triangle" << endl;
  
  cout << "Enter the Base  number for the triangle : " << endl;
  cin >> Base;
  
  cout << "Enter the Perpendicular number for the triangle : " << endl;
  cin >> Perpendicular;
  A = pow(Base,2);
  B = pow(Perpendicular,2);
   Area = Base * sqrt(B-A);
  
  cout << "The area of the right triangle  = " << Area << endl;
  
}