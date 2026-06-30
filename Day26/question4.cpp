#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    int answer;

    cout << "=== QUIZ APPLICATION ===\n";

    cout << "\n1. What is the capital of India?\n";
    cout << "1) Mumbai  2) Delhi  3) Kolkata  4) Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\n2. Which is the largest planet?\n";
    cout << "1) Earth  2) Mars  3) Jupiter  4) Venus\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\n3. What is 5 + 3 * 2?\n";
    cout << "1) 16  2) 11  3) 13  4) 10\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\n=== RESULT ===\n";
    cout << "Your score: " << score << " out of 3\n";

    if (score == 3)
        cout << "Excellent!\n";
    else if (score == 2)
        cout << "Good job!\n";
    else if (score == 1)
        cout << "Needs improvement!\n";
    else
        cout << "Better luck next time!\n";

    return 0;
}