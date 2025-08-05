//Question 16
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int capacity = 0; // Final answer: max number of people in the tram at any time
    int curr = 0;     // Current number of people in tram (starts at 0)

    int a, b; // a: people getting off, b: people getting on at each station

    while (n--) {
        cin >> a >> b;
        curr = curr - a;      // First, people get off
        curr = curr + b;      // Then, new people get on

        if (curr > capacity) {
            capacity = curr;  // Update max capacity if current exceeds it
        }
    }

    cout << capacity;
    return 0;
}
