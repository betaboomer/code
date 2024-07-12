#include <bits/stdc++.h> 
using namespace std; 

typedef long long ll;

ll co;

bool re[8][8], c[16], d1[16], d2[16];


void solve(ll y) {
    if (y == 8){
        co ++;
        return;
    }
    for (ll i = 0; i < 8; i++){
        if (c[i] || d1[y+i] || d2[y-i+7] || re[y][i]) continue;
        c[i] = d1[y+i] = d2[y-i+7] = true;
        solve(y + 1);
        c[i] = d1[y+i] = d2[y-i+7] = false;
    }
}



int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);


    for(int i = 0; i < 8; i++){
        string s; cin >> s;
        for (int j = 0; j < 8; j++){
            re[i][j] = (s[j] == '.' ? false : true);
        }
    }    

    for (int j = 0; j < 16; j++){
        c[j] = d1[j] = d2[j] = false;
    }

    solve(0);

    cout << co << "\n"; 
} 