#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;
 
int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
    vector<pair<int,int>>a(2*n);
    for (int i = 0; i < 2*n; i++){
        cin >> a[i].first >> a[i+1].first;
        a[i].second = 1;
        a[i+1].second = -1;   
        i++;
    }

    sort(a.begin(), a.end());

    int c = 0, c_max = 0;
    for(int i = 0; i < 2*n; i++){
        c += a[i].second;
        if (c > c_max) c_max = c;
    }

    cout << c_max << "\n";
} 