#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;
 
ll p10[20];
 
int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    p10[0] = 9;
    for (int i = 1; i < 19; ++i) p10[i] = p10[i - 1] * 10ll;
 
    int q; cin >> q;
 
    while(q--){
        ll k ; cin >> k;
 
        ll x = 1, s = 0, s1 = 0;
 
        while(s + p10[x-1]*x < k){
            s += p10[x-1]*x;
            s1 += p10[x-1];
            x++;
        }
 
        if (s){ 
            s1 += (k - s + x - 1)/x;
            ll x1 =x-(k - s)%x;    
 
            x1 %= x;

            while (x1){
                s1 /= 10LL;
                x1--;
            }
 
            s1 %=10LL;
            cout << s1 <<"\n";
        }
        else{
            cout << k <<"\n";
        }
    }
} 