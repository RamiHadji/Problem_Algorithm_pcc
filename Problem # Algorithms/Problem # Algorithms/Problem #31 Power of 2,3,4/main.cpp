#include <iostream>
using namespace std;

int main() {
  int Number;
  
  cout << "Enter the number: \n";
  cin >> Number;
  
  cout << "╔════════════╗" << endl;
  cout << "║  Program   ║" << endl;
  cout << "║   Output   ║" << endl;
  cout << "╚════════════╝" << endl;
  
  cout << "Square: " << Number * Number << endl;
  cout << "Cube: " << Number * Number * Number << endl;
  cout << "Quartic: " << Number * Number * Number * Number << endl;
  
  return 0;
}
