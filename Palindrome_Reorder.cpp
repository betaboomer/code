#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    map<char, int> count;

    for (char c : s) {
        count[c]++;
    }

    int oddCount = 0;
    char oddChar;
    for (auto &p : count) {
        if (p.second % 2 != 0) {
            oddCount++;
            oddChar = p.first;
            if (oddCount > 1) {
                cout << "NO SOLUTION";
                return 0;
            }
        }
    }

    string firstHalf = "", middle = "";
    if (oddCount == 1) {
        middle += oddChar;
        count[oddChar]--; 
    }

    for (auto &p : count) {
        firstHalf += string(p.second / 2, p.first);
    }

    string palindrome = firstHalf + middle + string(firstHalf.rbegin(), firstHalf.rend());
    cout << palindrome;

    return 0;
}
