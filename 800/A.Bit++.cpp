#include <iostream>
using namespace std;

int main() {
    int n, x = 0;
    cin >> n;

    while (n--) {
        string st;
        cin >> st;

        if (st == "X--" || st == "--X") {
            x--;
        } else if (st == "X++" || st == "++X") {
            x++;
        }
    }

    cout << x << endl;
    return 0;
}