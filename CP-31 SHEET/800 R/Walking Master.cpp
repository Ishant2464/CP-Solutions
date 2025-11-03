// Problem: Walking Master
// Link: https://codeforces.com/problemset/problem/1806/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (d < b) {
        cout << -1 << "\n";
        return;
    }

    long long ans = d - b;
    a += ans;

    if (c > a) {
        cout << -1 << "\n";
        return;
    }

    ans += (a - c);
    cout << ans << "\n";
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
    while (t--) {
        solve();
    }

    return 0;
}
