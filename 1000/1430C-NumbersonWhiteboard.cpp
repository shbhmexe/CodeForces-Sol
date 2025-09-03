//Question 43
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        cout << 2 << "\n"; // Final minimal number is always 2
 
        // Start from n and merge down
        int a = n, b = n - 1;
        cout << a << " " << b << "\n";
        int x = (a + b + 1) / 2; // ceil((a+b)/2)
 
        for (int i = n - 2; i >= 1; i--) {
            cout << x << " " << i << "\n";
            x = (x + i + 1) / 2;
        }
    }
    return 0;
}
