#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void ReadNumber(int& Hours, int& Minutes, int& Seconds)
{
  cout << "Please Enter the number of hours: ";
  cin >> Hours;
  cout << "Please Enter the number of minutes: ";
  cin >> Minutes;
  cout << "Please Enter the number of seconds: ";
  cin >> Seconds;
}

int TaskDurationInSeconds(int Hours, int Minutes, int Seconds)
{
  int totalSeconds = (Hours * 60 * 60) + (Minutes * 60) + Seconds;
  cout << totalSeconds << " seconds" << endl;
  return totalSeconds;
}

int main() {
  int Hours, Minutes, Seconds;
  ReadNumber(Hours, Minutes, Seconds);
  TaskDurationInSeconds(Hours, Minutes, Seconds);
  return 0;
}
