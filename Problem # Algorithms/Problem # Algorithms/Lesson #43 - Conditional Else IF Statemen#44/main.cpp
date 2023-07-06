#include <iostream>
#include <string>
using namespace std;

void ReadNumber(int& Number) {
  cout << "Enter the day number: ";
  cin >> Number;
}

void PrintDayOfWeek(int Number) {
  string daysOfWeek[] = {
    "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
  };

  if (Number >= 1 && Number <= 7) {
    cout << daysOfWeek[Number - 1] << endl;
  } else {
    cout << "Invalid day number!" << endl;
  }
}

int main() {
  int Number;
  
  ReadNumber(Number);
  PrintDayOfWeek(Number);

  return 0;
}
