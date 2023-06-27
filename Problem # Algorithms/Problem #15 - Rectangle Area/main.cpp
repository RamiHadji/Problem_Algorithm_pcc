#include <iostream>
using namespace std;
int main() {
  float Length, Width, Area;
  cout << "╔═════════════════════════════════╗" << endl;
  cout << "║        Calculate the area of    ║" <<endl;
  cout << "║          a  rectangle           ║" <<endl;
  cout << "╚═════════════════════════════════╝" << endl;

  cout << "Enter the length of the rectangle :" << endl;
  cin >> Length;

   cout << "Enter the width of the rectangle: " << endl;
  cin >> Width;

  Area = Length * Width;
  cout << "\nThe area of the rectangle is: " << Area << endl;

  
  cout << "\n╔═════════════════════════════════╗" << endl;
  cout << "║         End of Program          ║" << endl;
  cout << "╚═════════════════════════════════╝" << endl;
  
  return 0;
}