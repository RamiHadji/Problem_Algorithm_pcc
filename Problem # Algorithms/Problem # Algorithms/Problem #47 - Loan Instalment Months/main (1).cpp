#include <iostream>
using namespace std;

int main() {
  float loanAmount, monthlyPayment;
  short int totalMonths;

  cout << "How much loan do you want: ";
  cin >> loanAmount;

  cout << "How much can you pay each month: ";
  cin >> monthlyPayment;

  totalMonths = (loanAmount / monthlyPayment);

  cout << "The number of months required to pay off the loan: " << totalMonths << " months" << endl;

  return 0;
}
