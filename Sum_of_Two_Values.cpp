#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;
 
int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, x; cin >> n >> x;

    vector<pair<int,int>>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end());

    int p1, p2, l = 0, r = n-1;
    bool bol = false;
    while(l < r){
        if(a[l].first + a[r].first < x) l++;
        else if (a[l].first + a[r].first > x) r--;
        else{
            p1 = a[l].second;
            p2 = a[r].second;
            bol = true;
            break;
        }
    }
    if (bol) cout << p1+1 << " " << p2+1 << "\n";
    else cout << "IMPOSSIBLE" << "\n";
} 