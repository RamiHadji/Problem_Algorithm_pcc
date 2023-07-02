#include <iostream>
using namespace std;
int main() {
  
float Base, Height, Area;
  
  cout << "╔═════════════════════════════════╗" << endl;
  cout << "║       Calculate the area of      ║" << endl;
  cout << "║          a triangle              ║" << endl;
  cout << "╚═════════════════════════════════╝" << endl;
  
  cout << "Enter the base of the triangle: " << endl;
  cin >> Base;
  
  cout << "Enter the height of the triangle: " << endl;
  cin >> Height;

  Area = 0.5 * Base * Height;
  cout << "The area of the triangle is: " <<Area << endl;

  cout << "\n╔═════════════════════════════════╗" << endl;
  cout << "║         End of Program          ║" << endl;
  cout << "╚═════════════════════════════════╝" << endl;

  return 0;
}