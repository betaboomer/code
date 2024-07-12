#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    if (n > 3 || n == 1){
        vector<int> a;
        for (int i = 0; i < n/2; i++){
            a.push_back(2*(i + 1));
        }
        for (int i = 0; i < (n + 1)/2; i++){
            a.push_back(2*i + 1);
        }
        for (int i = 0; i < n; i++){
        cout << a[i] <<" ";
        }
        cout << "\n";
    }
    else cout << "NO SOLUTION" << "\n";
}


