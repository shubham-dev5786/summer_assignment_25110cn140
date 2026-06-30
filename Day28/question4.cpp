#include <iostream>
using namespace std;

struct Contact
{
    string name;
    string phone;
    string email;
};

int main()
{
    Contact c[100];
    int n = 0, choice;
    string searchName;
    bool found;

    do
    {
        cout << "\n=== CONTACT MANAGEMENT SYSTEM ===\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact by Name\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Name: ";
            cin >> c[n].name;

            cout << "Enter Phone: ";
            cin >> c[n].phone;

            cout << "Enter Email: ";
            cin >> c[n].email;

            n++;
            cout << "Contact added successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No contacts found!\n";
            }
            else
            {
                cout << "\n--- Contact List ---\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "Name: " << c[i].name
                         << ", Phone: " << c[i].phone
                         << ", Email: " << c[i].email << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Name to search: ";
            cin >> searchName;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (c[i].name == searchName)
                {
                    cout << "Contact Found!\n";
                    cout << "Name: " << c[i].name
                         << ", Phone: " << c[i].phone
                         << ", Email: " << c[i].email << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Contact not found!\n";

            break;

        case 4:
            cout << "Enter Name to delete: ";
            cin >> searchName;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (c[i].name == searchName)
                {
                    found = true;

                    for (int j = i; j < n - 1; j++)
                    {
                        c[j] = c[j + 1];
                    }

                    n--;

                    cout << "Contact deleted successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "Contact not found!\n";

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