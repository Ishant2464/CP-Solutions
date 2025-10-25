// Problem: How Much Does Daytona Cost?
// Link: https://codeforces.com/problemset/problem/1878/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    bool flag = false;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == k) flag = true;
    }
    if(flag) {
        cout << "YES\n";
        return;
    }
    else {
        cout << "NO\n";
        return;
    }
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
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}