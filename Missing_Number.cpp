#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> a[i];

    vector<int>b(n + 1);
    for (int i = 0; i < n; i++) b[a[i]] += 1;

    int k;
    for (int i = 1; i <= n; i++){
        if (!b[i]){
            k = i;  
            break;
        }
    }

    cout << k << "\n";
}


