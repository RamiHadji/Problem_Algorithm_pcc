
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double a, b, c, Area, P, T;
  const double PI = 3.14;

 
  
  cout << "Enter the value for side A=5>: " << endl;
  cin >> a;

  cout<< "Enter the value for side B=6>: " << endl;
  cin >> b;

 cout << "Enter the value for side C=7>: "<< endl;
  cin >> c;
  
 P = (a + b + c) / 2; 
T = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c)));
  
  Area = PI * pow(T, 2);
  cout << "Area of the triangle: " << Area << endl;
  
  return 0;
}