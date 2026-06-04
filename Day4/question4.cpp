#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are:\n";

    for (int num = start; num <= end; num++) {
        int temp = num, digit, sum = 0, count = 0;

        // Count digits
        int t = temp;
        while (t != 0) {
            count++;
            t /= 10;
        }

        // Calculate Armstrong sum
        t = temp;
        while (t != 0) {
            digit = t % 10;
            sum += pow(digit, count);
            t /= 10;
        }

        if (sum == num) {
            cout << num << " ";
        }
    }

    return 0;
}