#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


struct ranges {

    int l, r, in;

    bool operator<(const ranges& other) const
    {

        if (l == other.l)
            return r > other.r;

        return l < other.l;
    }
};


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<ranges> a(n);
    vector<bool> contained(n);
    vector<bool> contains(n);
    for (int i = 0; i < n; i++){
        cin >> a[i].l;
        cin >> a[i].r;
        a[i].in = i;
    }

    sort(a.begin(), a.end());


    int maxi = 0;
    for (int i = 0; i < n; i++){
        if (maxi >= a[i].r) contained[a[i].in] = true;
        maxi = max(maxi, a[i].r);
    }

    int mini = 1e9;
    for (int i = n - 1; i >= 0; i--){
        if (mini <= a[i].r) contains[a[i].in] = true;
        mini = min(mini, a[i].r);
    }

    for (int i = 0; i < n; i++){
        if (contains[i]) cout << 1 << " ";
        else cout << 0 << " ";
    }
    cout << "\n";
    for (int i = 0 ; i < n; i++){
        if (contained[i]) cout << 1 << " ";
        else cout << 0 << " ";
    }
    cout << "\n";
}
