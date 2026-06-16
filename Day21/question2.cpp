#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    cout << "Reversed string: ";

    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }

    cout << endl;

    return 0;
}