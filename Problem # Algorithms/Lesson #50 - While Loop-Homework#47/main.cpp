#include <iostream>
using namespace std;

void AtoZ() {
    int i = 65;
    while (i <= 90) {
        cout << "Print Letters from A to Z: " << char(i) << endl;
        i++;
    }
}

int main() {
    AtoZ();
    return 0;
}
