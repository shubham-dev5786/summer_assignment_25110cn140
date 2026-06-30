#include <iostream>
using namespace std;

struct Book
{
    int id;
    string title;
    string author;
    bool isIssued;
};

int main()
{
    Book b[100];
    int n = 0, choice, searchId;
    bool found;

    do
    {
        cout << "\n=== MINI LIBRARY SYSTEM ===\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Book ID: ";
            cin >> b[n].id;

            cout << "Enter Title: ";
            cin >> b[n].title;

            cout << "Enter Author: ";
            cin >> b[n].author;

            b[n].isIssued = false;

            n++;
            cout << "Book added successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No books available!\n";
            }
            else
            {
                cout << "\n--- Book List ---\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "ID: " << b[i].id
                         << ", Title: " << b[i].title
                         << ", Author: " << b[i].author
                         << ", Status: " << (b[i].isIssued ? "Issued" : "Available")
                         << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Book ID to issue: ";
            cin >> searchId;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (b[i].id == searchId)
                {
                    found = true;

                    if (!b[i].isIssued)
                    {
                        b[i].isIssued = true;
                        cout << "Book issued successfully!\n";
                    }
                    else
                    {
                        cout << "Book is already issued!\n";
                    }
                    break;
                }
            }

            if (!found)
                cout << "Book not found!\n";

            break;

        case 4:
            cout << "Enter Book ID to return: ";
            cin >> searchId;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (b[i].id == searchId)
                {
                    found = true;

                    if (b[i].isIssued)
                    {
                        b[i].isIssued = false;
                        cout << "Book returned successfully!\n";
                    }
                    else
                    {
                        cout << "Book was not issued!\n";
                    }
                    break;
                }
            }

            if (!found)
                cout << "Book not found!\n";

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