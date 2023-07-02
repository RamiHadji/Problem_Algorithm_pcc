#include <iostream>
using namespace std;

int main() {
  float Mark1, Mark2, Mark3, Average;
  
  cout << "Hello Enter the Mark1:\n";
  cin >> Mark1;

  cout << "And Enter the Mark2:\n";
  cin >> Mark2;

  cout << "And Enter the Mark3:\n";
  cin >> Mark3;
  
  Average = (Mark1 + Mark2 + Mark3) /3;
  cout << "The average mark is: " << Average << endl;
  return 0;
}