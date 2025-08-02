//Question 6
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> res;
        for (int p = 1; n; p *= 10, n /= 10)
            if (n % 10)
                res.push_back((n % 10) * p);
        cout << res.size() << "\n";
        for (int x : res) cout << x << " ";
        cout << "\n";
    }
}
