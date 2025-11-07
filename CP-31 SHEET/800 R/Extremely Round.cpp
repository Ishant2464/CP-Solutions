// Problem: Extremely Round
// Link: https://codeforces.com/problemset/problem/1766/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int ans = 0;
    while(n > 0) {
        int ld = n%10;
        n = n/10;
        if(n > 0) {
            ans += 9;
        }
        else {
            ans += ld;
        }
    }
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
    while (t--) solve();
    return 0;
}

