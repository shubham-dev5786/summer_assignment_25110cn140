#include <iostream>
using namespace std;

int main() {
    int a, b;
    int gcd, x, y;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    x = a;
    y = b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;

    int lcm = (x * y) / gcd;

    cout << "LCM = " << lcm << endl;

    return 0;
}