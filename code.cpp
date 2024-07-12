#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;
 
int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        int s_max = 0, s_curr = 0;
        for (int i = 1; i < s.size()/2 + 1; i++){
            for (int j = 0; j < s.size()-i; j++){
                if (s[j] == s[j+i] || s[j] == '?' || s[j+i] == '?'){
                    s_curr++;
                }
                else{
                    s_curr = 0;
                }
                if (s_curr == i){
                    s_max = max(s_curr, s_max);
                    break;
                }
            }
            s_curr = 0;
        }

        cout << s_max*2 << "\n";
    }
} 
