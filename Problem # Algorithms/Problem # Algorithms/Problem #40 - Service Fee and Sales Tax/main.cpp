#include <iostream>
using namespace std;
int main() {
  float BillVole, TotalBill;
  
  cout << "Enter the BillVole value :\n";
  cin >> BillVole;


  // Increase the value by 10%
  TotalBill = BillVole * 1.1;

  // Multiply the calculated value by 1.6
  TotalBill = TotalBill * 1.6;
  
  cout << "Total Bill: " << TotalBill << endl;
  return 0;
}