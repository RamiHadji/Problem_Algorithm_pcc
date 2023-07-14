#include <iostream>
#include <string>

using namespace std;

int main() {
    double Mark1, Mark2, Mark3, Avg;
    
    cout << "Enter Mark 1: ";
    cin >> Mark1;

    cout << "Enter Mark 2: ";
    cin >> Mark2;

    cout << "Enter Mark 3: ";
    cin >> Mark3;
    
    Avg = (Mark1 + Mark2 + Mark3) / 3;

    if (Avg >= 50) {
        cout << "Congratulations! You passed.";
    } else {
        cout << "Sorry, you failed.";
    }
    
    return 0;
}
