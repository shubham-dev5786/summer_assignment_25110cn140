#include <iostream>
using namespace std;

int main() {
    int arr[5], key, count = 0;

    cout << "Enter 5 elements: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to find frequency: ";
    cin >> key;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            count++;
        }
    }

    cout << "Frequency of " << key << " = " << count << endl;

    return 0;
}