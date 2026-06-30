#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    string course;
    float marks;
};

int main()
{
    Student s[100];
    int n = 0, choice, searchRoll;
    string searchName;
    bool found;

    do
    {
        cout << "\n=== STUDENT RECORD SYSTEM ===\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search by Roll No\n";
        cout << "4. Search by Name\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Roll No: ";
            cin >> s[n].rollNo;

            cout << "Enter Name: ";
            cin >> s[n].name;

            cout << "Enter Course: ";
            cin >> s[n].course;

            cout << "Enter Marks: ";
            cin >> s[n].marks;

            n++;
            cout << "Student added successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No student records found!\n";
            }
            else
            {
                cout << "\n--- Student List ---\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "Roll No: " << s[i].rollNo
                         << ", Name: " << s[i].name
                         << ", Course: " << s[i].course
                         << ", Marks: " << s[i].marks << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Roll No to search: ";
            cin >> searchRoll;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (s[i].rollNo == searchRoll)
                {
                    cout << "Student Found!\n";
                    cout << "Roll No: " << s[i].rollNo
                         << ", Name: " << s[i].name
                         << ", Course: " << s[i].course
                         << ", Marks: " << s[i].marks << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found!\n";
            break;

        case 4:
            cout << "Enter Name to search: ";
            cin >> searchName;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (s[i].name == searchName)
                {
                    cout << "Student Found!\n";
                    cout << "Roll No: " << s[i].rollNo
                         << ", Name: " << s[i].name
                         << ", Course: " << s[i].course
                         << ", Marks: " << s[i].marks << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found!\n";
            break;

        case 5:
            cout << "Exiting system...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}