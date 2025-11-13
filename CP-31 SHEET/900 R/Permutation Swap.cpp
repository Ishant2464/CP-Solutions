// Problem: Permutation Swap
// Link: https://codeforces.com/problemset/problem/1828/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i] = abs(arr[i] - (i + 1));
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) continue;
        if(ans == 0) ans = arr[i];
        else ans = gcd(ans, arr[i]);
    }
    cout << ans << "\n";
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
