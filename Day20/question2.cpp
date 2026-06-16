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

    bool isSymmetric = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    if (isSymmetric)
        cout << "Matrix is symmetric" << endl;
    else
        cout << "Matrix is not symmetric" << endl;

    return 0;
}