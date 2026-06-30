#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, choice, element, pos, found;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    do
    {
        cout << "\n=== ARRAY OPERATIONS MENU ===\n";
        cout << "1. Display Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Search Element\n";
        cout << "5. Update Element\n";
        cout << "6. Sort Array (Ascending)\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Array Elements: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;

        case 2:
            cout << "Enter element to insert: ";
            cin >> element;
            cout << "Enter position (0 to " << n << "): ";
            cin >> pos;

            if (pos >= 0 && pos <= n)
            {
                for (int i = n; i > pos; i--)
                    arr[i] = arr[i - 1];

                arr[pos] = element;
                n++;

                cout << "Element inserted successfully!\n";
            }
            else
                cout << "Invalid position!\n";
            break;

        case 3:
            cout << "Enter element to delete: ";
            cin >> element;
            found = 0;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] == element)
                {
                    for (int j = i; j < n - 1; j++)
                        arr[j] = arr[j + 1];

                    n--;
                    found = 1;
                    cout << "Element deleted successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "Element not found!\n";
            break;

        case 4:
            cout << "Enter element to search: ";
            cin >> element;
            found = 0;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] == element)
                {
                    cout << "Element found at position " << i << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Element not found!\n";
            break;

        case 5:
            cout << "Enter position to update (0 to " << n - 1 << "): ";
            cin >> pos;

            if (pos >= 0 && pos < n)
            {
                cout << "Enter new value: ";
                cin >> arr[pos];
                cout << "Element updated successfully!\n";
            }
            else
                cout << "Invalid position!\n";
            break;

        case 6:
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 0; j < n - i - 1; j++)
                {
                    if (arr[j] > arr[j + 1])
                    {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            cout << "Array sorted successfully!\n";
            break;

        case 7:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 7);

    return 0;
}