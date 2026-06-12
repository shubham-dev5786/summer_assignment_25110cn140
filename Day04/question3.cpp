#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, digit, sum = 0, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    int temp = num;
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong number." << endl;
    else
        cout << original << " is not an Armstrong number." << endl;

    return 0;
}