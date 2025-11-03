// Problem: Twin Permutations
// Link: https://codeforces.com/problemset/problem/1831/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        arr[i] = (n + 1) - arr[i];
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
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