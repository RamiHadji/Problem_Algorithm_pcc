#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double myRectangleArea(){
   double Number1, Number2;
  
cout << "Please write your Number1 here :-)" << endl;
   cin >> Number1;

   cout << "Please write your Number2 here :-)" << endl;
   cin >> Number2;
  
double Area = Number1 * Number2;

   cout << Area << endl;
   return 0;
}

int main() {
 
   myRectangleArea();
  
   return 0;
}