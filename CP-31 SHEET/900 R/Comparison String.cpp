// Problem: Comparison String
// Link: https://codeforces.com/problemset/problem/1837/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 1, l = 1;
    for(int i = 1; i < n; i++) {
        if(s[i] == s[i-1]) {
            c++;
            l = max(l, c);
        }
        else {
            c = 1;
        }
    }
    cout << l + 1 << "\n";
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