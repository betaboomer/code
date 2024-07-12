#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;
 
int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        vector<int> pre(n + 1);
        pre[0] = 0;
        for (int i = 1; i < n+1; i++)pre[i] += pre[i-1] + (s[i-1] == '0'?1:0);

        vector<int>a;
        for (int i = 1; i <= n; i++){
            if (pre[i] >= i - pre[i] && 2*(pre[n]-pre[i]) <= n - i) a.push_back(i);
        }

        if (pre[n]*2 <= n) a.push_back(0);


        sort(a.begin(), a.end());


        int m = n+1, ind = n+1;
        for (int i = 0; i < a.size(); i++){
            if (abs(n - 2*a[i]) < m){
                ind = a[i];
                m = abs(n - 2*a[i]);
            }
        }

        cout << ind << "\n";
    }
} 
