//Question 39
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }

        int changes = 0;

        // Check last row (except last cell)
        for (int j = 0; j < m - 1; j++) {
            if (grid[n - 1][j] != 'R')
                changes++;
        }

        // Check last column (except last cell)
        for (int i = 0; i < n - 1; i++) {
            if (grid[i][m - 1] != 'D')
                changes++;
        }

        cout << changes << "\n";
    }
    return 0;
}
