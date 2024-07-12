#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;

int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
 
const int n_max = 2e5+10;

int a[4][n_max];
int n; 
 
bool v[4][n_max];

void dfs(int i, int j){
    if(i<1 || i>2) return;
    if(j<1 || j>n) return;

    v[i][j] = true;
    
    for(int k = 0; k < 4; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        y += a[x][y];
        if(!v[x][y]) dfs(x, y);
    }
}
 
int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        cin>>n;
        for(int i=0; i<4; i++){
            for(int j=0; j<=n+4; j++){
                v[i][j] = false;
                a[i][j] = 0;
            }
        }
        for(int i=1; i<=2; i++){
            for(int j=1; j<=n; j++){
                char x; cin>>x;
                if(x=='>') a[i][j] = 1;
                else a[i][j] = -1;
            }
        }    
        dfs(1, 1);
        if(v[2][n]) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
} 