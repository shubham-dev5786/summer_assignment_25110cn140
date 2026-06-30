#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[100], str2[100], temp[100];
    int choice, len, i, j, flag;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    do
    {
        cout << "\n=== STRING OPERATIONS MENU ===\n";
        cout << "1. String Length\n";
        cout << "2. Reverse String\n";
        cout << "3. Copy String\n";
        cout << "4. Concatenate Strings\n";
        cout << "5. Compare Strings\n";
        cout << "6. Check Palindrome\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Length of first string: " << strlen(str1) << endl;
            cout << "Length of second string: " << strlen(str2) << endl;
            break;

        case 2:
            cout << "Reversed first string: ";
            for (i = strlen(str1) - 1; i >= 0; i--)
                cout << str1[i];
            cout << endl;
            break;

        case 3:
            strcpy(temp, str1);
            cout << "Copied string: " << temp << endl;
            break;

        case 4:
            strcpy(temp, str1);
            strcat(temp, str2);
            cout << "Concatenated string: " << temp << endl;
            break;

        case 5:
            if (strcmp(str1, str2) == 0)
                cout << "Strings are equal\n";
            else if (strcmp(str1, str2) > 0)
                cout << "First string is greater\n";
            else
                cout << "Second string is greater\n";
            break;

        case 6:
            flag = 1;
            len = strlen(str1);

            for (i = 0, j = len - 1; i < j; i++, j--)
            {
                if (str1[i] != str1[j])
                {
                    flag = 0;
                    break;
                }
            }

            if (flag)
                cout << "First string is palindrome\n";
            else
                cout << "First string is not palindrome\n";
            break;

        case 7:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 7);

    return 0;
}