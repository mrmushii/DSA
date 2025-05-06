#include <iostream>
#include <climits>
using namespace std;

int matrixChainOrder(int P[], int n) {
    int M[100][100]; // Table to store results

    // Step 1-2: Initialize diagonal to 0 (single matrix = no multiplication)
    for (int i = 1; i < n; i++) {
        M[i][i] = 0;
    }

    // Step 3-10: L is chain length
    for (int L = 2; L < n; L++) {
        for (int i = 1; i <= n - L; i++) {
            int j = i + L - 1;
            M[i][j] = INT_MAX;

            for (int k = i; k < j; k++) {
                int q = M[i][k] + M[k + 1][j] + P[i - 1] * P[k] * P[j];
                if (q < M[i][j]) {
                    M[i][j] = q;
                }
            }
        }
    }

    return M[1][n - 1]; // Result is stored here
}

int main() {
    int P[100], n;

    cout << "Enter number of matrices: ";
    cin >> n;

    cout << "Enter dimensions (n+1 numbers):" << endl;
    for (int i = 0; i <= n; i++) {
        cout << "P[" << i << "]: ";
        cin >> P[i];
    }

    int result = matrixChainOrder(P, n + 1);
    cout << "\nMinimum number of multiplications is: " << result << endl;

    return 0;
}
