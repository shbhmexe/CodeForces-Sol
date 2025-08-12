#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<int,int>> instruments; // {days_required, index}

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        instruments.push_back({a, i + 1}); // store 1-based index
    }

    // Sort by days required
    sort(instruments.begin(), instruments.end());

    vector<int> chosen;
    int total_days = 0;

    for(auto &inst : instruments) {
        if(total_days + inst.first <= k) {
            total_days += inst.first;
            chosen.push_back(inst.second);
        } else break;
    }

    // Output result
    cout << chosen.size() << "\n";
    for(int idx : chosen) cout << idx << " ";
    return 0;
}
