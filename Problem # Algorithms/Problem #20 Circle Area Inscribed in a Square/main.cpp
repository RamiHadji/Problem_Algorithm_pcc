#include <iostream>
using namespace std;
int main() {
    // Variables to store the area and side length
  float Area, sideLength;
  
  // Constant value for PI
  const double PI = 3.14;
  
  // Output the formatted title
   cout << "╔═════════════════════════════════╗" << endl;
  cout <<  "║      Circle Area Inscribed in   ║" << endl;
  cout <<  "║            a Square             ║" << endl;
   cout << "╚═════════════════════════════════╝" << endl;

  // Prompt the user to enter the side length of the square
  cout << "Enter the side length of the square: ";
  cin >> sideLength;

  // Calculate the area of the inscribed circle
  Area = (sideLength * sideLength * PI) / 4;

  // Output the area of the square
  cout << "The area of the square is: " << Area << endl;


  // Output the end of the program message
  cout << "\n╔═════════════════════════════════╗" << endl;
  cout << "║         End of Program          ║" << endl;
  cout << "╚═════════════════════════════════╝" << endl;
  
  return 0;
}