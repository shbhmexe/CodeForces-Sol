//Question 4
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrinkToasts = (k * l) / nl;
    int totalLimeToasts = c * d;
    int totalSaltToasts = p / np;

    int maxToasts = min({totalDrinkToasts, totalLimeToasts, totalSaltToasts}) / n;
    cout << maxToasts << "\n";

    return 0;
}
