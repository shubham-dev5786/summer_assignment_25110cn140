#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are:\n";

    for (int num = start; num <= end; num++) {
        bool isPrime = true;

        if (num <= 1)
            isPrime = false;
        else {
            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
            cout << num << " ";
    }

    return 0;
}