#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadNumber()
{int A;
  cout << "Please Enter the Number A: ";
  cin >> A;
  return A;
}

void PowerOf2_3_4(int A)
{
  int a, b, c;
  a = A * A;
  b= A * A * A;
  c = A * A * A * A;
  cout << a << " "<< b  << " "<< c << " "<< endl;
}



int main() {
 
  PowerOf2_3_4(ReadNumber());
  
  return 0;
}
