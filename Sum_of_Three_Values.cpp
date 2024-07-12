#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k; cin >> n >> k;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++) {
        int q; cin >> q;
        a.push_back({q, i});
    }

    sort(a.begin(), a.end());

    int l = -1, m = -1, r = -1;
    for (int i = 0; i < n-2; i++){
        int s = k - a[i].first, l_temp = i+1, r_temp = n-1;
        bool bol = false;
        while(l_temp < r_temp){
            if (a[l_temp].first + a[r_temp].first > s) r_temp--;
            else if (a[l_temp].first + a[r_temp].first < s)l_temp++;
            else{
                bol = true;
                l = a[l_temp].second;
                r = a[r_temp].second;
                m = a[i].second;
                break;
            }

            if (bol)break;
        }

    }
    
    if (l == -1) cout << "IMPOSSIBLE" << "\n";
    else cout << m + 1 << " " << l + 1 << " " << r + 1 << "\n"; 
}