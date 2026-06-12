#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        // print spaces
        for (int j = i; j < n; j++) {
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