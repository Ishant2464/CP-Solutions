// Problem: Make It Increasing
// Link: https://codeforces.com/problemset/problem/1675/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long op = 0;

    for(int i = n - 2; i >= 0; i--) {
        while(a[i] >= a[i + 1]) {
            if(a[i] == 0) {
                cout << -1 << "\n";
                return;
            }
            a[i] /= 2;
            op++;
        }
    }

    cout << op << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


