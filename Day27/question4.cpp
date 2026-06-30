#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float marks[5];
    float total;
    float percentage;
    char grade;
};

int main()
{
    Student s[100];
    int n, choice;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for student " << i + 1 << endl;

        cout << "Roll No: ";
        cin >> s[i].rollNo;

        cout << "Name: ";
        cin >> s[i].name;

        s[i].total = 0;

        cout << "Enter marks of 5 subjects:\n";
        for (int j = 0; j < 5; j++)
        {
            cin >> s[i].marks[j];
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 5;

        if (s[i].percentage >= 90)
            s[i].grade = 'A';
        else if (s[i].percentage >= 75)
            s[i].grade = 'B';
        else if (s[i].percentage >= 60)
            s[i].grade = 'C';
        else if (s[i].percentage >= 40)
            s[i].grade = 'D';
        else
            s[i].grade = 'F';
    }

    cout << "\n\n=== MARKSHEET REPORT ===\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nRoll No: " << s[i].rollNo;
        cout << "\nName: " << s[i].name;
        cout << "\nTotal Marks: " << s[i].total;
        cout << "\nPercentage: " << s[i].percentage << "%";
        cout << "\nGrade: " << s[i].grade << endl;
        cout << "------------------------";
    }

    return 0;
}