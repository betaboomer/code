#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;
 
int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        int ans = 0;
        for(int i = 1; i <= n; i++) ans += (2*i-1)*i;

        cout << ans << " " << 2*n << "\n";
        for (int i = n; i >= 1; i--){
            cout << "1 " << i << " ";
            for (int i = 1; i <= n; i++) cout << i << " ";
            cout << "\n";
            cout << "2 " << i << " ";
            for (int i = 1; i <= n; i++) cout << i << " ";
            cout << "\n";
        }   
    }
} 
