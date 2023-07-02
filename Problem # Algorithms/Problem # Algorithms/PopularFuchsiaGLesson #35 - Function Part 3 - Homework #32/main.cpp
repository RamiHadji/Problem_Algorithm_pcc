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
int readNumber(){
  int number;
  cout << "Please Enter the Number: "<< endl;
  cin >> Number;
  return Number;
}
int ReadPower(){
  int Number;
  cout << "Please Enter the Power: "<< endl;
  cin >> Number;
  return Number;}
int PowerOfM(int number, int M){
  if(M == 0){
    return 1;
  }
  int P=1;
  for(int i=1; i<=M, i++){
    P = P * Number;
  }
  return P;
  
  
}

int main() {
 
  cout << endl << "Result = " << PowerOfM(ReadNumber(),ReadPower());
  
  return 0;
}
