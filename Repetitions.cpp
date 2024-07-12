#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;

    int m = 0, c = 1;
    string s1 = "";

    for (int i = 1; i < s.size(); i++){
        if (s[i - 1] == s[i]) c += 1;
        else c = 1;
        if (m < c) m = c;
    }
    if (m < c) m = c;
    cout << m << "\n";
}


