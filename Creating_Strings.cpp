
#include <bits/stdc++.h> 
using namespace std; 


int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;

    vector <string> permutaion;

    sort(s.begin(), s.end());

    do {
        permutaion.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << permutaion.size() << "\n";
    for (auto i : permutaion) cout << i << " \n";
} 
