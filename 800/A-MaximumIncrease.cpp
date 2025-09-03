//Question 28
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    int max_len = 1, curr_len = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] > a[i - 1]) {
            curr_len++;
            max_len = max(max_len, curr_len);
        } else {
            curr_len = 1;
        }
    }
 
    cout << max_len << endl;
    return 0;
}