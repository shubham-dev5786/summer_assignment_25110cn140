#include <iostream>
using namespace std;

int main() {
    char str[200];
    int count = 0;

    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            count++;
        }
    }

    cout << "Number of words: " << count << endl;

    return 0;
}