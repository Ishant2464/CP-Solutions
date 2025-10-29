// Problem: Buttons
// Link: https://codeforces.com/problemset/problem/1858/A
#include <bits/stdc++.h>
using namespace std;


void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    if(c % 2 == 1) {
        if(a >= b) {
            cout << "First\n";
        }
        else {
            cout << "Second\n";
        }
    }
    else {
        if(b >= a) {
            cout << "Second\n";
        }
        else {
            cout << "First\n";
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
