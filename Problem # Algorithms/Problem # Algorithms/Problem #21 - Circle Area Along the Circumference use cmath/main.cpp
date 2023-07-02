#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double circumference, area;
  const double PI = 3.14;

  cout << "Enter the circumference of the circle: ";
  cin >> circumference;

  area = pow(circumference, 2) / (4 * PI);

  cout << "Circle area = " << area << endl;

  return 0;
}
