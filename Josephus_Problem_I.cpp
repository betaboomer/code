#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;

const ll INF = LLONG_MAX;

int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;

    vector<int> a(n);
    vector<bool> b(n);
    for (int i = 0; i < n; i++){
        a[i] = i + 1;
        b[i] = false; 
    }

    int k = n, l = 0;
    bool bol = false;
    while(k){
        l = l%n;
        if (b[l] == false){
            if (bol){
                k--;
                cout << a[l] << " ";
                b[l] = true;
                bol = false;
            }
            else{
                l++;
                bol = true;
            }
        }
        else{
            l++;
        }
    }
    cout << "\n";
} 