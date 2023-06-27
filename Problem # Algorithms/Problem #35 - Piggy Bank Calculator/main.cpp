#include <iostream>
using namespace std;
int main() {
  float Penny, Nickel, Dime, Quarter, Dollar;
  double totalPennies, totalDolars;
  
  cout << "Enter the number of pieces from Penny : \n";
  cin >> Penny;

  cout << "Enter the number of pieces from Nickel : \n";
  cin >> Nickel;

  cout << "Enter the number of pieces from Dime : \n";
  cin >> Dime;

  cout << "Enter the number of pieces from Quarter : \n";
  cin >> Quarter;

  cout << "Enter the number of pieces from Dollar : \n";
  cin >> Dollar;
totalPennies = (Penny * 1) + (Nickel * 5 )+ (Dime * 10 )+ (Quarter * 25 )+ (Dollar * 100);
  
  totalDolars = totalPennies / 100;

  cout << "Total Pennies :" << totalPennies << endl;
  cout << "TotalDolars :" << totalDolars << endl;

  return 0;
}