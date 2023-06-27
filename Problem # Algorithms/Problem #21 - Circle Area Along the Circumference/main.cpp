#include <iostream>
using namespace std;

int main() {
  // Variables to store the area and circumference
  float Area, Circumference;
  
  // Constant value for PI
  const double PI = 3.14;

  // Output the formatted title
  cout << "╔═════════════════════════════════╗" << endl;
  cout << "║      Circle Area Along the      ║" << endl;
  cout << "║          Circumference          ║" << endl;
  cout << "╚═════════════════════════════════╝" << endl;

  // Prompt the user to enter the circumference of the circle
cout << "Enter the circumference of the circle: ";
cin >> Circumference;

  // Calculate the radius of the inscribed circle
  Area = (Circumference * Circumference ) / (4 * PI);

  // Output the area of the square
  cout << "The area of the square is: " << Area << endl;

  // Output the end of the program message
  cout << "\n╔═════════════════════════════════╗" << endl;
  cout << "║         End of Program          ║" << endl;
  cout << "╚═════════════════════════════════╝" << endl;
  
  return 0;
}
