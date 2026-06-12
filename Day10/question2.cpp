#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {

        // print leading spaces
        for (int j = n; j > i; j--) {
            cout << " ";
        }

        // print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}