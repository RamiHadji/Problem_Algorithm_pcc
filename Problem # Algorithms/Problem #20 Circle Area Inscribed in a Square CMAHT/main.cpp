#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double Area, side;
  const double PI = 3.14;
  cout << "Circle side Number : " << endl;
  cin >> side;
 
  Area = (PI * pow(side,2)) / 4 ;
  
  
  cout << "Circle area = " << Area << endl;
}