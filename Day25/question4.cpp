#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string sentence, word;
    vector<string> words;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);

    while (ss >> word)
    {
        words.push_back(word);
    }

    sort(words.begin(), words.end(), [](string a, string b)
    {
        return a.length() < b.length();
    });

    cout << "Words sorted by length:\n";
    for (string w : words)
    {
        cout << w << " ";
    }

    return 0;
}