// Problem: Blank Space
// Link: https://codeforces.com/problemset/problem/1829/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    int maxi = 0;
    int l = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if(arr[i] == 1) {
            l = 0;
        }
        else {
            l++;
            maxi = max(maxi, l);
        }
    }
    cout << maxi << "\n";
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
