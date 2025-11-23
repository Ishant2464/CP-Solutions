// Problem: Odd Queries
// Link: https://codeforces.com/problemset/problem/1807/D
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pref[i + 1] = pref[i] + a[i];
    }
    vector<string> ans;
    for (int i = 0; i < q; i++) {
        int l, r, k;
        cin >> l >> r >> k;
        long long sub = pref[r] - pref[l - 1];
        long long add = 1LL * (r - l + 1) * k;
        long long sum = pref[n] - sub + add;
        if (sum % 2) ans.push_back("YES");
        else ans.push_back("NO");
    }
    for (int i = 0; i < q; i++) cout << ans[i] << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
