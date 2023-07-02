#include <iostream>
#include <string>

using namespace std;

double myNumberSwap(){
  double Number1, Number2;
cout << "Please write your Number1 here  :-)" << endl;
  cin >> Number1;

  cout << "Please write your Number2 here  :-)" << endl;
  cin >> Number2;

  double Temp = Number1;
  Number1 = Number2;
  Number2 = Temp;
  cout << Number1 << Number2 << endl;
  return 0;
}

int main() {
 
  myNumberSwap();
  
  return 0;
}