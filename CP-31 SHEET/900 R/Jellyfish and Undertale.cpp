// Problem: Jellyfish and Undertale
// Link: https://codeforces.com/problemset/problem/1875/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, n;
    cin >> a >> b >> n;
    vector<long long> arr(n);
    long long ans = b;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        ans = ans + min(arr[i], a - 1);
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