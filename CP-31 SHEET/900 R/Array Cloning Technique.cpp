// Problem: Array Cloning Technique
// Link: https://codeforces.com/problemset/problem/1665/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    int maxi = 0;
    int num;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
        if(mp[a[i]] > maxi) {
            maxi = mp[a[i]];
            num = a[i];
        }
    }
    if(maxi == n) {
        cout << 0 << "\n";
        return;
    }
    int ans = n - maxi;
    while(maxi < n) {
        ans++;
        maxi = maxi * 2;
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