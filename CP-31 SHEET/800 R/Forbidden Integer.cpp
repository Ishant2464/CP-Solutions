// Problem: Forbidden Integer
// Link: https://codeforces.com/problemset/problem/1845/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1) {
        cout << "YES\n";
        cout << n << "\n";
        for (int i = 0; i < n; i++) cout << 1 << " ";
        cout << "\n";
        return;
    }

    if (k == 1) {
        cout << "NO\n";
        return;
    }

    if (k == 2 && n % 2 == 1) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    if (n % 2 == 0) {
        cout << n / 2 << "\n";
        for (int i = 0; i < n / 2; i++) cout << 2 << " ";
        cout << "\n";
    } else {
        cout << (n - 3) / 2 + 1 << "\n";
        cout << 3 << " ";
        for (int i = 0; i < (n - 3) / 2; i++) cout << 2 << " ";
        cout << "\n";
    }
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
