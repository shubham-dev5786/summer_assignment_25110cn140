#include <iostream>
using namespace std;

struct Account
{
    int accNo;
    string name;
    float balance;
};

int main()
{
    Account a[100];
    int n = 0, choice, searchAcc;
    float amount;

    do
    {
        cout << "\n=== BANK ACCOUNT SYSTEM ===\n";
        cout << "1. Create Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Check Balance\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Account Number: ";
            cin >> a[n].accNo;

            cout << "Enter Name: ";
            cin >> a[n].name;

            cout << "Enter Initial Balance: ";
            cin >> a[n].balance;

            n++;
            cout << "Account created successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No accounts found!\n";
            }
            else
            {
                cout << "\n--- Account List ---\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "A/C No: " << a[i].accNo
                         << ", Name: " << a[i].name
                         << ", Balance: " << a[i].balance << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Account Number: ";
            cin >> searchAcc;

            cout << "Enter amount to deposit: ";
            cin >> amount;

            {
                bool found = false;

                for (int i = 0; i < n; i++)
                {
                    if (a[i].accNo == searchAcc)
                    {
                        a[i].balance += amount;
                        cout << "Deposit successful!\n";
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Account not found!\n";
            }
            break;

        case 4:
            cout << "Enter Account Number: ";
            cin >> searchAcc;

            cout << "Enter amount to withdraw: ";
            cin >> amount;

            {
                bool found = false;

                for (int i = 0; i < n; i++)
                {
                    if (a[i].accNo == searchAcc)
                    {
                        found = true;

                        if (a[i].balance >= amount)
                        {
                            a[i].balance -= amount;
                            cout << "Withdrawal successful!\n";
                        }
                        else
                        {
                            cout << "Insufficient balance!\n";
                        }
                        break;
                    }
                }

                if (!found)
                    cout << "Account not found!\n";
            }
            break;

        case 5:
            cout << "Enter Account Number: ";
            cin >> searchAcc;

            {
                bool found = false;

                for (int i = 0; i < n; i++)
                {
                    if (a[i].accNo == searchAcc)
                    {
                        cout << "Current Balance: " << a[i].balance << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Account not found!\n";
            }
            break;

        case 6:
            cout << "Exiting system...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}