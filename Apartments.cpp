#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;
 
 
int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m, k; cin >> n >> m >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int>b(m);
    for (int i = 0; i < m; i++) cin >> b[i];

    int num = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int l = 0, r = 0, q = 0;

    while (l < n && r < m){
        if (abs(a[l] - b[r]) <= k){
            l++;
            r++;
            q++;
        }
        else {
            if (a[l] > b[r]) r++;
            else l++;
        }
    }

    cout << q << "\n";
} 