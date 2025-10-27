// Problem: United We Stand
// Link: https://codeforces.com/problemset/problem/1859/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    int max_val = INT_MIN;
    int min_val = INT_MAX;
    for (int &x : a) {
        cin >> x;
        max_val = max(max_val, x);
        min_val = min(min_val, x);
    }
    if (max_val == min_val) {
        cout << -1 << "\n";
    } 
    else {
        vector<int> b, c;
        for (int x : a) {
            if (x == max_val) {
                c.push_back(x);
            } else {
                b.push_back(x);
            }
        }
        cout << b.size() << " " << c.size() << "\n";
        for (int x : b) {
            cout << x << " ";
        }
        cout << "\n";
        for (int x : c) {
            cout << x << " ";
        }
        cout << "\n";
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