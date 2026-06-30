#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    bool visited[256] = {false};
    string result = "";

    for (char ch : str)
    {
        if (!visited[(unsigned char)ch])
        {
            visited[(unsigned char)ch] = true;
            result += ch;
        }
    }

    cout << "String after removing duplicates: " << result << endl;

    return 0;
}