#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;
 
int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    map <int, int> mp;
    for(int i = 0; i < n; i++) mp[a[i]] = i+1;
    
    int c = n + 1, ans = 0;
    for(int i = 0; i < n; i++){
        if (mp[i+1] < c){
            ans++;
        }
        c = mp[i+1];
    }

    while(m--){
        int x, y; cin >> x >> y;

        if (a[x-1] == 1){
            if (x > mp[a[x-1]+1]){
                if (y <= mp[a[x-1]+1]) ans--;
            }
            else{
                if (y >= mp[a[x-1]+1]) ans++;
            }
        }
        else if (a[x-1] == n){
            if (x > mp[a[x-1]-1]){
                if (y <= mp[a[x-1]-1]) ans++;
            }
            else{
                if (y >= mp[a[x-1]-1]) ans--;
            }             
        }
        else{
            if (x > mp[a[x-1]+1]){
                if (y <= mp[a[x-1]+1]) ans--;
            }
            else{
                if (y >= mp[a[x-1]+1]) ans++;
            }

            if (x > mp[a[x-1]-1]){
                if (y <= mp[a[x-1]-1]) ans++;
            }
            else{
                if (y >= mp[a[x-1]-1]) ans--;
            }  
        }

        if (a[y-1] == 1){
            if (a[y-1] + 1 != a[x-1]){
                if (y > mp[a[y-1]+1]){
                    if (x <= mp[a[y-1]+1]) ans--;
                }
                else{
                    if (x >= mp[a[y-1]+1]) ans++;
                }   
            }
        }
        else if (a[y-1] == n){
            if (a[y-1]-1 != a[x-1]){
                if (y > mp[a[y-1]-1]){
                    if (x <= mp[a[y-1]-1]) ans++;
                }   
                else{
                    if (x >= mp[a[y-1]-1]) ans--;
                }    
            }
        }
        else{
            if (a[y-1] + 1 != a[x-1]){
                if (y > mp[a[y-1]+1]){
                    if (x <= mp[a[y-1]+1]) ans--;
                }
                else{
                    if (x >= mp[a[y-1]+1]) ans++;
                }   
            }

            if (a[y-1]-1 != a[x-1]){
                if (y > mp[a[y-1]-1]){
                    if (x <= mp[a[y-1]-1]) ans++;
                }   
                else{
                    if (x >= mp[a[y-1]-1]) ans--;
                }    
            } 
        }

        mp[a[x-1]] = y;
        mp[a[y-1]] = x;
        swap(a[x-1], a[y-1]);
        cout << ans << "\n";
    }
} 
