//Question 25
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;
        int count = 0;
        while (max(a, b) <= n) {
            if (a < b)
                a += b;
            else
                b += a;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
