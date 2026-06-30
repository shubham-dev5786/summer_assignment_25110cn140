#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float marks;
};

int main()
{
    Student s[100];
    int n = 0, choice, searchRoll;

    do
    {
        cout << "\n=== STUDENT RECORD MANAGEMENT SYSTEM ===\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll No\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Roll No: ";
            cin >> s[n].rollNo;

            cout << "Enter Name: ";
            cin >> s[n].name;

            cout << "Enter Marks: ";
            cin >> s[n].marks;

            n++;
            cout << "Student added successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No records found!\n";
            }
            else
            {
                cout << "\n--- Student Records ---\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "Roll No: " << s[i].rollNo
                         << ", Name: " << s[i].name
                         << ", Marks: " << s[i].marks << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Roll No to search: ";
            cin >> searchRoll;

            bool found;
            found = false;

            for (int i = 0; i < n; i++)
            {
                if (s[i].rollNo == searchRoll)
                {
                    cout << "Student Found!\n";
                    cout << "Roll No: " << s[i].rollNo
                         << ", Name: " << s[i].name
                         << ", Marks: " << s[i].marks << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found!\n";

            break;

        case 4:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}