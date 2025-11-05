// Problem: Serval and Mocha's Array
// Link: https://codeforces.com/problemset/problem/1789/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    bool flag = false;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(gcd(arr[i], arr[j]) <= 2) {
                flag = true;
                break;
            }
        }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
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