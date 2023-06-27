#include <iostream>
using namespace std;


int main() {

  cout << "╔═════════════════════════════════╗" << endl;
  cout << "║      Circle Area Through        ║" << endl;
  cout << "║             Diameter            ║" << endl;
  cout << "╚═════════════════════════════════╝" << endl;

  float Aera, Diameter;
  const float PI = 3.14 ;

  cout << "Enter the diameter of the circle: " << endl;
  cin >> Diameter;

  Aera = (Diameter * Diameter * PI) / 4;

  cout << "\nThe area of the circle is: " << Aera << endl;
  
  cout << "\n╔═════════════════════════════════╗" << endl;
  cout << "║         End of Program          ║" << endl;
  cout << "╚═════════════════════════════════╝" << endl;
  
  return 0;
}