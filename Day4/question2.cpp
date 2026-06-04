#include <iostream>
using namespace std;

int main() {
    int n;
    long long first = 0, second = 1, next;

    cout << "Enter the value of n: ";
    cin >> n;

    if (n == 1) {
        cout << "Fibonacci term at position " << n << " is: " << first << endl;
    }
    else if (n == 2) {
        cout << "Fibonacci term at position " << n << " is: " << second << endl;
    }
    else {
        for (int i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        cout << "Fibonacci term at position " << n << " is: " << second << endl;
    }

    return 0;
}