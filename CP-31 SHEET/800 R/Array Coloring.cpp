// Problem: Array Coloring
// Link: https://codeforces.com/problemset/problem/1857/A
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    vector<int> arr(n);
    int ocnt = 0, ecnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            ecnt++;
        } else {
            ocnt++;
        }
    }
    if(ocnt == 0) {
        cout << "YES\n";
    }
    else if(ecnt == 0) {
        if(ocnt % 2 == 0) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    else {
        if(ocnt % 2 == 0) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
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