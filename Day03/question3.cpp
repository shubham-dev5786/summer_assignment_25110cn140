#include <iostream>
using namespace std;

int main() {
    int a, b, gcd;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Euclidean Algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;

    cout << "GCD = " << gcd << endl;

    return 0;
}