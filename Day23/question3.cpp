#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    int len1 = 0, len2 = 0;

    for (int i = 0; str1[i] != '\0'; i++) len1++;
    for (int i = 0; str2[i] != '\0'; i++) len2++;

    if (len1 != len2) {
        cout << "Not anagrams" << endl;
        return 0;
    }

    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(int)str1[i]]++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        freq[(int)str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            cout << "Not anagrams" << endl;
            return 0;
        }
    }

    cout << "Strings are anagrams" << endl;

    return 0;
}