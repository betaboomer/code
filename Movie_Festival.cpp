#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;
 
int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
    vector<pair<int,int>>a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i].second >> a[i].first;
    }

    sort(a.begin(), a.end());

    int c = 0, c_next = 0;
    for(int i = 0; i < n; i++){
        if (a[i].second >= c_next){
            c++;
            c_next = a[i].first;    
        }
    }

    cout << c << "\n";
} 