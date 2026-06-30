#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

int main()
{
    Employee e[100];
    int n = 0, choice, searchId;

    do
    {
        cout << "\n=== EMPLOYEE MANAGEMENT SYSTEM ===\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Employee ID: ";
            cin >> e[n].id;

            cout << "Enter Name: ";
            cin >> e[n].name;

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
                cout << "\n--- Employee Records ---\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "ID: " << e[i].id
                         << ", Name: " << e[i].name
                         << ", Salary: " << e[i].salary << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Employee ID to search: ";
            cin >> searchId;

            {
                bool found = false;

                for (int i = 0; i < n; i++)
                {
                    if (e[i].id == searchId)
                    {
                        cout << "Employee Found!\n";
                        cout << "ID: " << e[i].id
                             << ", Name: " << e[i].name
                             << ", Salary: " << e[i].salary << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Employee not found!\n";
            }
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