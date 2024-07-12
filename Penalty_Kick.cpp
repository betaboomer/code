#include <bits/stdc++.h>

using namespace std;

const int MAX = 100'007;

vector<int> a;

bool ok(int n) {
	if (n == 1) {return true;}
	bool ans = false;
	for (int i : a) {
		if (n % i == 0) {
			ans |= ok(n / i);
		}
	}
	return ans;
}

int main() {
	for (int i = 2; i < MAX; i++) {
		int curr = i;
		bool bad = false;
		while (curr) {
			if (curr % 10 > 1) {bad = true; break;}
			curr /= 10;
		}
		if (!bad) a.push_back(i);
	}
	
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
	    cout << (ok(n) ? "YES\n" : "NO\n");    
    }
}