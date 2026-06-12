#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {

        for (int j = i; j < n; j++) {
            cout << " ";
        }

        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }

        ch -= 2;
        for (int j = 1; j < i; j++) {
            cout << ch;
            ch--;
        }

        cout << endl;
    }

    return 0;
}