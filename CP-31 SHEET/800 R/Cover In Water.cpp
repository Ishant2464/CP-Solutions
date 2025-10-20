// Problem: Cover in Water
// Link: https://codeforces.com/problemset/problem/1900/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    bool cst = false;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            cnt++;
        }
        else {
            if(cnt >= 3) {
                cst = true;
                break;
            }
            else {
                ans += cnt;
                cnt = 0;
            }
        }
    }
    if(cnt >= 3) {
        cst = true;
    }
    else {
        ans += cnt;
        cnt = 0;
    }
    if(cst) {
        cout << "2\n";
        return;
    }
    cout << ans << "\n";
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