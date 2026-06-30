#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    bool present[256] = {false};
    bool printed[256] = {false};

    for (char ch : str1)
    {
        present[(unsigned char)ch] = true;
    }

    cout << "Common characters: ";

    for (char ch : str2)
    {
        if (present[(unsigned char)ch] && !printed[(unsigned char)ch])
        {
            cout << ch << " ";
            printed[(unsigned char)ch] = true;
        }
    }

    return 0;
}