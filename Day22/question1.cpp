#include <iostream>
using namespace std;

int main() {
    char str[100];
    int length = 0;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "String is palindrome" << endl;
    else
        cout << "String is not palindrome" << endl;

    return 0;
}