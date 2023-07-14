#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    bool hasDriverLicense;

    cout << "How old are you? ";
    cin >> age;

    cout << "Do you have a driver's license? (0 = No, 1 = Yes) ";
    cin >> hasDriverLicense;

    if (age >= 21 || hasDriverLicense) {
        cout << "Congratulations! You're hired." << endl;
    } else {
        cout << "Sorry, you have been rejected." << endl;
    }

    return 0;
}
