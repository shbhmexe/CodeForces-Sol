//Question 35
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        int l = -1, r = -1;
        // Find first and last '1'
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                if (l == -1) l = i;
                r = i;
            }
        }
        
        // If no '1' or only one '1', no zeros need to be erased
        if (l == -1 || l == r) {
            cout << 0 << "\n";
            continue;
        }
        
        // Count zeros between l and r
        int countZero = 0;
        for (int i = l; i <= r; i++) {
            if (s[i] == '0') countZero++;
        }
        
        cout << countZero << "\n";
    }
    return 0;
}
