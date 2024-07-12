#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;

const ll INF = LLONG_MAX;

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
  
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, k; cin >> n >> k;

    ordered_set a;
    for (int i = 0; i < n; i++){
        a.insert(i+1);
    }

    int sp = 0;


    while(a.size()){
        sp %= a.size();
        int l = (sp+k)%a.size();
        sp = l;
        auto l1 = a.find_by_order(l);
        cout << *l1 << " ";
        a.erase(l1);
    }
    cout << "\n";
} 