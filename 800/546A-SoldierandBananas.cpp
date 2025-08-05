//Question 18
#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    // Total cost using arithmetic sum formula
    int totalCost = k * w * (w + 1) / 2;

    // Calculate how much to borrow
    int borrow = totalCost - n;

    // If he doesn't need to borrow, output 0
    if (borrow < 0)
        cout << 0 << endl;
    else
        cout << borrow << endl;

    return 0;
}
