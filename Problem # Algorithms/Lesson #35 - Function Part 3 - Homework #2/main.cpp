#include <iostream>
#include <string>

using namespace std;

string myName(){
  string Name;
cout << "Please write your name here  :-)" << endl;
  cin >> Name;
  return Name;
}

int main() {
 
  cout << myName() << endl;
  
  return 0;
}