#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;
 
 
int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int l = 0, r = n - 1;
    while (l < r){
        if (a[l] + a[r] <= x){
            n--;
            l++;
            r--;
        }
        else {
            r--;
        }
    }
    cout << n << "\n";
} 