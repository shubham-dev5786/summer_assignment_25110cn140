#include <iostream>
using namespace std;

struct Booking
{
    int ticketNo;
    string name;
};

int main()
{
    Booking b[100];
    int n = 0, choice, searchTicket;
    int availableSeats = 10;   // total seats
    bool found;

    do
    {
        cout << "\n=== TICKET BOOKING SYSTEM ===\n";
        cout << "1. Book Ticket\n";
        cout << "2. View Bookings\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Check Available Seats\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (availableSeats > 0)
            {
                cout << "Enter Ticket No: ";
                cin >> b[n].ticketNo;

                cout << "Enter Name: ";
                cin >> b[n].name;

                n++;
                availableSeats--;

                cout << "Ticket booked successfully!\n";
            }
            else
            {
                cout << "No seats available!\n";
            }
            break;

        case 2:
            if (n == 0)
            {
                cout << "No bookings found!\n";
            }
            else
            {
                cout << "\n--- Booking List ---\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "Ticket No: " << b[i].ticketNo
                         << ", Name: " << b[i].name << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Ticket No to cancel: ";
            cin >> searchTicket;

            found = false;

            for (int i = 0; i < n; i++)
            {
                if (b[i].ticketNo == searchTicket)
                {
                    found = true;

                    for (int j = i; j < n - 1; j++)
                    {
                        b[j] = b[j + 1];
                    }

                    n--;
                    availableSeats++;

                    cout << "Ticket cancelled successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "Ticket not found!\n";

            break;

        case 4:
            cout << "Available Seats: " << availableSeats << endl;
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