#include <iostream>
using namespace std;

int main() {
  float totalSeconds;
  int days, hours, minutes, seconds;
  
  cout << "Enter the number of seconds: ";
  cin >> totalSeconds;

  days = totalSeconds / (24 * 60 * 60);
  int remainingSeconds = totalSeconds - (days * 24 * 60 * 60);

  hours = remainingSeconds / (60 * 60);
  remainingSeconds -= (hours * 60 * 60);

  minutes = remainingSeconds / 60;
  seconds = remainingSeconds % 60;

  cout << "Duration: " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;

  return 0;
}
