// Problem: Ambitious Kid
// Link: https://codeforces.com/problemset/problem/1866/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    int ans = INT_MAX;
    for (int &x : a) {
        cin >> x;
        ans = min(ans, abs(x));
    }
    cout << ans << '\n';
}

/**
 * This is the main function where the program starts.
 */
int main() {
    // 1. FAST I/O: This speeds up cin and cout dramatically.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 2. FILE I/O: This block only runs on your local machine.
#ifndef ONLINE_JUDGE
    // Redirects input from "input.txt"
    freopen("input.txt", "r", stdin);
    // Redirects output to "output.txt"
    freopen("output.txt", "w", stdout);
#endif

    int t;
    t = 1;
    while (t--) {
        solve();
    }

    return 0;
}