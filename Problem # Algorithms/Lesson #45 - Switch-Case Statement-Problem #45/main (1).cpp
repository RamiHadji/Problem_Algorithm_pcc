#include <iostream>
using namespace std;
enum enMonth { January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12 };

int main() {
  int monthNumber;
  cout << "Enter a month number (1-12): ";
  cin >> monthNumber;

  enMonth  Month;
  Month = enMonth (monthNumber);

  switch(Month){
    case January:
    cout << "Month is January" ;
    break;
    case February:
    cout << "Month is February" ;
    break;
    case March:
    cout << "Month is March" ;
    break;
    case May:
    cout << "Month is May" ;
    break;
    case June:
    cout << "Month is June" ;
    break;
    case July:
    cout << "Month is July" ;
    break;
    case August:
    cout << "Month is August" ;
    break;
    case September:
    cout << "Month is September" ;
    break;
    case October:
    cout << "Month is October" ;
    break;
    case November:
    cout << "Month is November" ;
    break;
    case December:
    cout << "Month is December" ;
    break;
   
    default:
    cout << "Invalid Month!";
      break;
  }
  
}