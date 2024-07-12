#include<bits/stdc++.h>
#define sq(a) (a)*(a)
 
using namespace std;
using ll = long long int;
 
 
 
int main() {
   int n; cin >> n;
   vector<int> kek(n);
   for(int i= 0; i < n; i++){
      cin >> kek[i];
   }
   sort(kek.begin(), kek.end());
   int q; cin >> q;
   while(q--){
        int ans = 0;
        int m; cin >> m;
        int l = 0, r = n-1;
      
        while(l <= r){
            int mid = (l+r)/2;
            if(kek[mid] <= m){
                l = mid + 1;
                ans = mid + 1;
            }
            else {
                r = mid - 1;
            } 
        }
        cout << ans << "\n";
   }
}