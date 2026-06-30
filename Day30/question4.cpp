#include <iostream>
using namespace std;

const int MAX = 100;

struct Student
{
    int roll;
    string name;
    float marks;
};

Student s[MAX];
int n = 0;

void addStudent()
{
    cout << "Enter Roll No: ";
    cin >> s[n].roll;

    cout << "Enter Name: ";
    cin >> s[n].name;

    cout << "Enter Marks: ";
    cin >> s[n].marks;

    n++;
    cout << "Student added successfully!\n";
}

void displayStudents()
{
    if (n == 0)
    {
        cout << "No student records found!\n";
        return;
    }

    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Roll: " << s[i].roll
             << ", Name: " << s[i].name
             << ", Marks: " << s[i].marks << endl;
    }
}

void searchStudent()
{
    int roll;
    cout << "Enter Roll No to search: ";
    cin >> roll;

    for (int i = 0; i < n; i++)
    {
        if (s[i].roll == roll)
        {
            cout << "Student Found!\n";
            cout << "Roll: " << s[i].roll
                 << ", Name: " << s[i].name
                 << ", Marks: " << s[i].marks << endl;
            return;
        }
    }

    cout << "Student not found!\n";
}

void updateMarks()
{
    int roll;
    cout << "Enter Roll No to update: ";
    cin >> roll;

    for (int i = 0; i < n; i++)
    {
        if (s[i].roll == roll)
        {
            cout << "Enter new marks: ";
            cin >> s[i].marks;

            cout << "Marks updated successfully!\n";
            return;
        }
    }

    cout << "Student not found!\n";
}

void deleteStudent()
{
    int roll;
    cout << "Enter Roll No to delete: ";
    cin >> roll;

    for (int i = 0; i < n; i++)
    {
        if (s[i].roll == roll)
        {
            for (int j = i; j < n - 1; j++)
            {
                s[j] = s[j + 1];
            }

            n--;
            cout << "Student deleted successfully!\n";
            return;
        }
    }

    cout << "Student not found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n=== MINI STUDENT MANAGEMENT SYSTEM ===\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Marks\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            updateMarks();
            break;

        case 5:
            deleteStudent();
            break;

        case 6:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}