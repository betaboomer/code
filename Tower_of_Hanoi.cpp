
#include <bits/stdc++.h> 
using namespace std; 

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) { 

	if (n == 0) { 
		return; 
	}

	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod); 
	cout << from_rod << " " <<  to_rod << "\n"; 
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod); 
} 

int main() 
{ 
	int N; cin >> N;
    cout << pow(2, N) - 1 << "\n";
	towerOfHanoi(N, '1', '3', '2'); 
	return 0; 
} 
