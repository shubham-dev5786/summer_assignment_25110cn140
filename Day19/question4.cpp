#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    int a[n][n];

    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int primarySum = 0, secondarySum = 0;

    for (int i = 0; i < n; i++) {
        primarySum += a[i][i];

        secondarySum += a[i][n - i - 1];
    }

    cout << "Primary diagonal sum: " << primarySum << endl;
    cout << "Secondary diagonal sum: " << secondarySum << endl;

    return 0;
}