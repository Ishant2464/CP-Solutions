// Problem: Sequence Game
// Link: https://codeforces.com/problemset/problem/1862/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> b(n);
    for (int &x : b) {
        cin >> x;
    }
    vector<int> a;
    a.push_back(b[0]);
    for(int i = 1; i < n; i++) {
        if(b[i] >= b[i-1]) {
            a.push_back(b[i]);
        }
        else {
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }
    cout << a.size() << "\n";
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
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