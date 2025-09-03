//Question 33
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        int d = x[0] - '0';       // first digit
        int len = x.size();       // length of number
        int presses = (d - 1) * 10 + (len * (len + 1)) / 2;
        cout << presses << "\n";
    }
}
