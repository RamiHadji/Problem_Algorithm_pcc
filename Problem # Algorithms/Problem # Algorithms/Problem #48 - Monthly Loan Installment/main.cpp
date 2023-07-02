#include <iostream>
#include <iomanip> // For std::setprecision
using namespace std;

int main() {
  float loanAmount, monthlyPayment;
  short int totalMonths;

  cout << "How much loan do you want: ";
  cin >> loanAmount;

  cout << "How many months will you pay it: ";
  cin >> totalMonths;

  
  monthlyPayment = loanAmount / totalMonths;

  
  cout << "You have to pay every month: $" << monthlyPayment << endl;

  return 0;
}
