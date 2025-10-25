// Problem: Don't Try to Count
// Link: https://codeforces.com/problemset/status?my=on
#include <bits/stdc++.h>
using namespace std;

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    string x;
    string s;
    cin >> x;
    cin >> s;
    int op = 0;
    while(x.size() <= 50) {
        if(x.find(s) != string::npos) {
            cout << op << endl;
            return;
        }
        x = x + x;
        op++;
    }
    cout << -1 << endl;
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