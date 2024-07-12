#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<pair<pair<int, int>, int>> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i].first.first >> a[i].first.second;
        a[i].second = i;
    }

    sort(a.begin(), a.end());

    vector<int> b(n, -1);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;

    int rid = 1;
    for (int i = 0; i < n; i++){
        if (q.size() == 0){
            b[a[i].second] = rid++;
            q.push(make_pair(a[i].first.second, rid-1));
        }
        else{
            if (q.top().first  < a[i].first.first){
                b[a[i].second] = q.top().second;
                pair<int, int> x = q.top();
                q.pop();
                q.push(make_pair(a[i].first.second, x.second));
            }
            else {
                b[a[i].second] = rid++;
                q.push(make_pair(a[i].first.second, rid-1));     
            }
        }
    }

    cout << rid - 1 << "\n";
    for (int i = 0; i < n; i++) cout << b[i] << " ";
    cout << "\n";
}
