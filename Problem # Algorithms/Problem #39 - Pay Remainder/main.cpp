#include <iostream>
using namespace std;

int main() {
  float TotalBill, CashPaid;
  double Remainder;

  cout << "Enter the grand total of the bill: ";
  cin >> TotalBill;

  cout << "Enter the amount paid: ";
  cin >> CashPaid;

  Remainder = CashPaid - TotalBill;


  cout << "The remainder amount: " << Remainder << endl;

  return 0;
}
