#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    stack<pair<int, int>> st;
    for (int i = 0; i < n; i++){
        while(!st.empty() && st.top().first >= a[i]) st.pop();

        if (st.size() > 0) cout << st.top().second << " ";
        else cout << 0 << " ";

        st.push({a[i], i + 1});
    }

    cout << "\n";
}