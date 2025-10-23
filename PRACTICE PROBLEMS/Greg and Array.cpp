// Problem: Greg and Array
// Link: https://codeforces.com/contest/295/problem/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<array<int, 3>> ops(m);
    for (int i = 0; i < m; i++)
        cin >> ops[i][0] >> ops[i][1] >> ops[i][2];

    vector<pair<int, int>> queries(k);
    for (int i = 0; i < k; i++)
        cin >> queries[i].first >> queries[i].second;

    // Step 1: compute how many times each operation is used
    vector<long long> op_apply(m + 1, 0);
    for (auto [x, y] : queries) {
        x--, y--;
        op_apply[x] += 1;
        op_apply[y + 1] -= 1;
    }
    for (int i = 1; i < m; i++)
        op_apply[i] += op_apply[i - 1];

    // Step 2: apply operations efficiently on array
    vector<long long> add(n + 1, 0);
    for (int i = 0; i < m; i++) {
        long long times = op_apply[i];
        int l = ops[i][0] - 1, r = ops[i][1] - 1;
        long long d = ops[i][2];
        add[l] += d * times;
        add[r + 1] -= d * times;
    }
    for (int i = 1; i < n; i++)
        add[i] += add[i - 1];

    // Step 3: combine with initial array
    for (int i = 0; i < n; i++)
        cout << a[i] + add[i] << " ";
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
    t = 1;
    while (t--) {
        solve();
    }

    return 0;
}