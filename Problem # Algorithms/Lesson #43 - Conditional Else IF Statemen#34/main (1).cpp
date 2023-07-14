#include <iostream>

using namespace std;

void ReadSalesNumber(float& SalesNumber) {
  cout << "Enter sales number: ";
  cin >> SalesNumber;
}

void CalculateCommission(float SalesNumber) {
  float Percentage = SalesNumber / 100;

  if (Percentage >= 10000) {
    cout << "Percentage is 1%: " << SalesNumber * 0.01 << endl;
  } else if (Percentage >= 5000 && Percentage < 10000) {
    cout << "Percentage is 2%: " << SalesNumber * 0.02 << endl;
  } else if (Percentage >= 1000 && Percentage < 5000) {
    cout << "Percentage is 3%: " << SalesNumber * 0.03 << endl;
  } else if (Percentage >= 500 && Percentage < 1000) {
    cout << "Percentage is 5%: " << SalesNumber * 0.05 << endl;
  } else {
    cout << "Percentage is 0: " << SalesNumber * 0 << endl;
  }
}

int main() {
  float SalesNumber;
  ReadSalesNumber(SalesNumber);
  CalculateCommission(SalesNumber);
  return 0;
}
