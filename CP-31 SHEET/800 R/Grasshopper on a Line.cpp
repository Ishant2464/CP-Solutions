// Problem:  Grasshopper on a Line
// Link: https://codeforces.com/problemset/problem/1837/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    if(n%k != 0) {
        cout << 1 << "\n";
        cout << n << "\n";
    }
    else {
        cout << 2 << "\n";
        cout << n-1 << " " << 1 << "\n";
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
