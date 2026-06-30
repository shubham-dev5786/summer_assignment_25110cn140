#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
    float salary;
};

int main()
{
    Employee e[100];
    int n = 0, choice, searchId;
    bool found;

    do
    {
        cout << "\n=== MINI EMPLOYEE MANAGEMENT SYSTEM ===\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Salary\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Employee ID: ";
            cin >> e[n].id;

            cout << "Enter Name: ";
            cin >> e[n].name;

            cout << "Enter Department: ";
            cin >> e[n].department;

            cout << "Enter Salary: ";
            cin >> e[n].salary;

            n++;
            cout << "Employee added successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No employee records found!\n";
            }
            else
            {
                cout << "\n--- Employee List ---\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "ID: " << e[i].id
                         << ", Name: " << e[i].name
                         << ", Department: " << e[i].department
                         << ", Salary: " << e[i].salary << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Employee ID to search: ";
            cin >> searchId;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (e[i].id == searchId)
                {
                    cout << "Employee Found!\n";
                    cout << "ID: " << e[i].id
                         << ", Name: " << e[i].name
                         << ", Department: " << e[i].department
                         << ", Salary: " << e[i].salary << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found!\n";
            break;

        case 4:
            cout << "Enter Employee ID to update salary: ";
            cin >> searchId;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (e[i].id == searchId)
                {
                    cout << "Enter new salary: ";
                    cin >> e[i].salary;

                    cout << "Salary updated successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found!\n";
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