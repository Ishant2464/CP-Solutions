// Problem: Coins
// Link: https://codeforces.com/problemset/problem/1814/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;
    if (n % 2 == 0 || (n - k) % 2 == 0)
    cout << "YES\n";
    else
    cout << "NO\n";
    return;
}

/**
 * This is the main function where the program starts.
 */
int main() {
    // 1. FAST I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 2. FILE I/O (for local testing)
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