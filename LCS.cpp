#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int LCS(string X, string Y) {
    int m = X.length();
    int n = Y.length();
    int L[100][100]; // Table to store lengths of LCS

    // Build the LCS table in bottom-up fashion
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = 1 + L[i - 1][j - 1];
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    return L[m][n]; // Length of LCS is in L[m][n]
}

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    int lcsLength = LCS(str1, str2);

    cout << "\nLength of Longest Common Subsequence: " << lcsLength << endl;

    return 0;
}
