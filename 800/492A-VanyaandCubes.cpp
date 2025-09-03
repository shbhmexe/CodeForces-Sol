//Question 31
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int height = 0, used = 0, need = 1;

    while (used + need <= n) {
        used += need;
        height++;
        need += (height + 1); // next level needs (1+2+...+(h+1)) = need + (h+1)
    }

    cout << height << endl;
    return 0;
}
