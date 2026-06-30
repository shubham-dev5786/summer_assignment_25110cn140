#include <iostream>
using namespace std;

int main()
{
    int choice;
    double balance = 1000.0; // initial balance
    double amount;

    cout << "=== ATM SIMULATION ===" << endl;

    do
    {
        cout << "\n----- MENU -----" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Current Balance: " << balance << endl;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;

            if (amount > 0)
            {
                balance += amount;
                cout << "Deposit successful!" << endl;
            }
            else
            {
                cout << "Invalid amount!" << endl;
            }
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount > 0 && amount <= balance)
            {
                balance -= amount;
                cout << "Withdrawal successful!" << endl;
            }
            else
            {
                cout << "Insufficient balance or invalid amount!" << endl;
            }
            break;

        case 4:
            cout << "Thank you for using ATM!" << endl;
            break;

        default:
            cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 4);

    return 0;
}