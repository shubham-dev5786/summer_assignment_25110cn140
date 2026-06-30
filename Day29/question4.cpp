#include <iostream>
using namespace std;

struct Item
{
    int id;
    string name;
    int quantity;
    float price;
};

int main()
{
    Item items[100];
    int n = 0, choice, searchId, newQty;
    bool found;

    do
    {
        cout << "\n=== INVENTORY MANAGEMENT SYSTEM ===\n";
        cout << "1. Add Item\n";
        cout << "2. Display Inventory\n";
        cout << "3. Search Item\n";
        cout << "4. Update Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Item ID: ";
            cin >> items[n].id;

            cout << "Enter Item Name: ";
            cin >> items[n].name;

            cout << "Enter Quantity: ";
            cin >> items[n].quantity;

            cout << "Enter Price: ";
            cin >> items[n].price;

            n++;
            cout << "Item added successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No items in inventory!\n";
            }
            else
            {
                cout << "\n--- Inventory List ---\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "ID: " << items[i].id
                         << ", Name: " << items[i].name
                         << ", Quantity: " << items[i].quantity
                         << ", Price: " << items[i].price << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Item ID to search: ";
            cin >> searchId;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (items[i].id == searchId)
                {
                    cout << "Item Found!\n";
                    cout << "ID: " << items[i].id
                         << ", Name: " << items[i].name
                         << ", Quantity: " << items[i].quantity
                         << ", Price: " << items[i].price << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Item not found!\n";
            break;

        case 4:
            cout << "Enter Item ID to update quantity: ";
            cin >> searchId;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (items[i].id == searchId)
                {
                    cout << "Enter new quantity: ";
                    cin >> newQty;
                    items[i].quantity = newQty;

                    cout << "Quantity updated successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Item not found!\n";
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