#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;
 
int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;

    vector<int> a(n);
    int mi = -1000000000;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] > mi){
            mi = a[i];
        }
    }

    ll c_sum = 0, ans = 0;
    for(int i = 0; i < n; i++){
        c_sum += a[i];
        if (c_sum < 0) c_sum = 0;
        if(ans < c_sum) ans = c_sum;
    }

    if(ans) cout << ans << "\n";
    else cout << mi << "\n";
} 