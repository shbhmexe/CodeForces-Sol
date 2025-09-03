//Question 29
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string table;
    cin >> table;  // card on the table
    
    bool canPlay = false;
    for (int i = 0; i < 5; i++) {
        string card;
        cin >> card;
        
        // Check rank or suit
        if (card[0] == table[0] || card[1] == table[1]) {
            canPlay = true;
        }
    }
    
    cout << (canPlay ? "YES" : "NO") << endl;
    return 0;
}