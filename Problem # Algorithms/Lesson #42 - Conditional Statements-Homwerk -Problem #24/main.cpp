#include <iostream>
#include <string>

using namespace std;

int main() {
  int Age;
  cout << "How old are you" ;
  cin >> Age;
  
  if(Age >= 18 &&  Age <= 45){
    cout << "valid Age" << endl;
  }
  else{
      cout << "Invalid Age" << endl;

  }
  return 0;
  
}