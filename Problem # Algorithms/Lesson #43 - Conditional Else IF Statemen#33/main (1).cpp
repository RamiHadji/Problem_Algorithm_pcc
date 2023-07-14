#include <string>
#include <iostream>

using namespace std;

void ReadGrade(int& Grade) {
  cout << "Enter grade: ";
  cin >> Grade;
}

void GradeF(int Grade) {
  if (Grade >= 90 && Grade <= 100) {
    cout << "Grade A" << endl;
  } else if (Grade >= 80 && Grade <= 89) {
    cout << "Grade B" << endl;
  } else if (Grade >= 70 && Grade <= 79) {
    cout << "Grade C" << endl;
  } else if (Grade >= 60 && Grade <= 69) {
    cout << "Grade D" << endl;
  } else if (Grade >= 50 && Grade <= 59) {
    cout << "Grade E" << endl;
  } else {
    cout << "Grade F" << endl;
  }
}

int main() {
  int Grade;
  ReadGrade(Grade);
  GradeF(Grade);
  return 0;
}
