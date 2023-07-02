#include <iostream>
using namespace std;

int main() {
  float days, hours, minutes, seconds, totalSeconds;
  
  cout << "Enter the number of days: ";
  cin >> days;

  cout << "Enter the number of hours: ";
  cin >> hours;
  
  cout << "Enter the number of minutes: ";
  cin >> minutes;

  cout << "Enter the number of seconds: ";
  cin >> seconds;

  totalSeconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;
  
  cout << "Total duration: " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
  cout << "Total number of seconds: " << totalSeconds << " seconds" << endl;

  return 0;
}
