#include <iostream>
using namespace std;
int main() {
  float Area, legTriangle, baseTriangle;
  // Output the formatted title

  // Constant value for PI
  const double PI = 3.14;
  
  cout << "╔═════════════════════════════════╗" << endl;
  cout << "║    Circle Area Inscribed in an  ║" << endl;
  cout << "║        Isosceles Triangle       ║" << endl;
  cout << "╚═════════════════════════════════╝" << endl;

  
  cout << "Enter the side length of the isosceles triangle: \n";
  cin >> legTriangle ;

  cout << "Enter the length of the base of the triangle: \n";
  cin >> baseTriangle;

    Area = (PI * (baseTriangle * baseTriangle) / 4) * ((2 * legTriangle - baseTriangle) / (2 * legTriangle + baseTriangle));

cout << "Circle area: " << Area << endl;
  return 0;
}