// Problem: We Need the Zero
// Link: https://codeforces.com/problemset/problem/1805/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int total_xor = 0;
    for (int &x : a) cin >> x, total_xor ^= x;

    if (n % 2 == 1)
        cout << total_xor << "\n";
    else
        cout << (total_xor == 0 ? 0 : -1) << "\n";
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

