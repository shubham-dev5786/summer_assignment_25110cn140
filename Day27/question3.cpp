#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    float basicSalary;
    float allowance;
    float deduction;
};

int main()
{
    Employee e[100];
    int n = 0, choice, searchId;

    do
    {
        cout << "\n=== SALARY MANAGEMENT SYSTEM ===\n";
        cout << "1. Add Employee Salary Details\n";
        cout << "2. Display All Salary Records\n";
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

            cout << "Enter Basic Salary: ";
            cin >> e[n].basicSalary;

            cout << "Enter Allowance: ";
            cin >> e[n].allowance;

            cout << "Enter Deduction: ";
            cin >> e[n].deduction;

            n++;
            cout << "Employee salary record added successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No records found!\n";
            }
            else
            {
                cout << "\n--- Salary Records ---\n";
                for (int i = 0; i < n; i++)
                {
                    float netSalary = e[i].basicSalary + e[i].allowance - e[i].deduction;

                    cout << "ID: " << e[i].id
                         << ", Name: " << e[i].name
                         << ", Basic: " << e[i].basicSalary
                         << ", Allowance: " << e[i].allowance
                         << ", Deduction: " << e[i].deduction
                         << ", Net Salary: " << netSalary << endl;
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
                        float netSalary = e[i].basicSalary + e[i].allowance - e[i].deduction;

                        cout << "Employee Found!\n";
                        cout << "ID: " << e[i].id
                             << ", Name: " << e[i].name
                             << ", Net Salary: " << netSalary << endl;

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