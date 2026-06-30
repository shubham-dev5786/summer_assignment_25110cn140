#include <iostream>
#include <string>
using namespace std;

bool isRotation(string str1, string str2)
{
    if (str1.length() != str2.length())
        return false;

    string temp = str1 + str1;

    return (temp.find(str2) != string::npos);
}

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (isRotation(str1, str2))
        cout << "Strings are rotations of each other." << endl;
    else
        cout << "Strings are not rotations of each other." << endl;

    return 0;
}