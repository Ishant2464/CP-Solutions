// Problem: Desorting
// Link: https://codeforces.com/problemset/problem/1853/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n); 
    for (int &x : arr) {
        cin >> x;
    }
    bool sort = true;
    int mini = INT_MAX;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            sort = false;
            break;
        }
        mini = min(mini, arr[i] - arr[i - 1]);
    }
    if(!sort) {
        cout << 0 << "\n";
    }
    else {
        cout << mini/2 + 1 << "\n";
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