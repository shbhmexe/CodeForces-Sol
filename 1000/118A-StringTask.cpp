//Question 40
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string vowels = "aoyeui";
    string ans = "";
    
    for (char c : s) {
        char lowerC = tolower(c);
        if (vowels.find(lowerC) == string::npos) { // not a vowel
            ans += '.';
            ans += lowerC;
        }
    }
    
    cout << ans << "\n";
    return 0;
}
