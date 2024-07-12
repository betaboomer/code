#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    vector<int> a1,a2;

    int sum = (n + 1)*n;
    sum /= 2;

    if (sum % 2){
        cout << "NO" << "\n";
    }
    else {
        if (n % 2 == 0){
            for (int i = 0; i < n/2; i++){
                if (i % 2){
                    a1.push_back(i + 1);
                    a1.push_back(n - i);
                }
                else {
                    a2.push_back(i + 1);
                    a2.push_back(n - i);
                }
            }
        }
        else {
            int a, b, c;
            b = (n + 1)/ 2;
            a = b - b/2;
            c = b + b/2;
            bool bol = true;
            for (int i  = 0; i < n/2; i++){
                if (i + 1 != a){
                   if (bol){
                        a1.push_back(i + 1);
                        a1.push_back(n - i);
                        bol = false;
                    }
                    else {
                        a2.push_back(i + 1);
                        a2.push_back(n - i);
                        bol = true;
                    } 
                }
            }
            a1.push_back(a);
            a1.push_back(b);
            a2.push_back(c);
        }
        cout << "YES" << "\n";
        cout << a1.size() << "\n";
        for (int i = 0; i < a1.size(); i++){
            cout << a1[i] << " ";
        }
        cout << "\n"; 

        cout << a2.size() << "\n";
        for (int i = 0; i < a2.size(); i++){
            cout << a2[i] << " ";
        }
        cout << "\n"; 
    }
}
