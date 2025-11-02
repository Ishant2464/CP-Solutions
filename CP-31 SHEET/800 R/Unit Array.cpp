// Problem:  Unit Array
// Link: https://codeforces.com/problemset/problem/1834/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    int nn = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] != 1) {
            nn++;
        }
        sum += arr[i];
    }
    if(sum >= 0) {
        if(nn%2 == 0) {
            cout << 0 << "\n";
        } else {
            cout << 1 << "\n";
        }
    }
    else {
        int ch = abs(sum);
        int pos = ceil(ch/2.0);
        nn = nn - pos;
        if(nn%2 == 0) {
            cout << pos << "\n";
        } else {
            cout << pos + 1 << "\n";
        }
    }
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
