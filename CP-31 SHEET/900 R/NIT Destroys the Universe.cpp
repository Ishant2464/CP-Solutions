// Problem: NIT Destroys the Universe
// Link: https://codeforces.com/problemset/problem/1696/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int c = 0;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            if(c > 0) ans++;
            c = 0;
        }
        else {
            c++;
        }
    }
    if(c > 0) ans++;
    cout << min(ans, 2) << "\n";
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
