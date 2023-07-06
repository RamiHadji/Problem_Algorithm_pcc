#include <iostream>
#include <string>

using namespace std;

enum enDay {
  Sunday = 1,
  Monday = 2,
  Tuesday = 3,
  Wednesday = 4,
  Thursday = 5,
  Friday = 6,
  Saturday = 7
};

int main() {
  int c;
  cout << "Enter a day number (1-7): ";
  cin >> c;
  enDay Day;
  Day = enDay(c);

  switch (Day) {
    case Sunday:
      cout << "Day is Sunday";
      break;
    case Monday:
      cout << "Day is Monday";
      break;
    case Tuesday:
      cout << "Day is Tuesday";
      break;
    case Wednesday:
      cout << "Day is Wednesday";
      break;
    case Thursday:
      cout << "Day is Thursday";
      break;
    case Friday:
      cout << "Day is Friday";
      break;
    case Saturday:
      cout << "Day is Saturday";
      break;
    default:
      cout << "Invalid day!";
      break;
  }

  return 0;
}
