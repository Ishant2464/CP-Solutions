// Problem: Mocha and Math
// Link: https://codeforces.com/problemset/problem/1559/A
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = a[0];
    for(int i = 1; i < n; i++) {
        ans = ans & a[i];
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
