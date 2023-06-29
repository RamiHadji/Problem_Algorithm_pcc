#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double Area, radius ;
 const double PI = 3.14;
  cout << "Enter the radius of the circle: " << endl;
  cin >> radius;

  Area = PI * pow(radius,2);
  
cout << "Circle area = " << Area << endl;
}