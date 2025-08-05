//Question 17
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    while (k--) {
        if (n % 10 == 0)
            n = n / 10;  // If last digit is 0, divide by 10
        else
            n = n - 1;   // Else subtract 1
    }

    cout << n << endl;
    return 0;
}
