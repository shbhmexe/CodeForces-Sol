//Question 2
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int matrix[6][6];
    int rowDistance, colDistance;

    // Reading the matrix (1-based index emulated with offset)
    for (int row = 1; row < 6; row++) {
        for (int col = 1; col < 6; col++) {
            cin >> matrix[row][col];

            if (matrix[row][col] == 1) {
                // Calculate Manhattan distance to center (3,3)
                rowDistance = abs(3 - row);
                colDistance = abs(3 - col);
                cout << (rowDistance + colDistance) << endl;
            }
        }
    }

    return 0;
}