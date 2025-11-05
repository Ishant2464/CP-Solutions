// Problem: Prepend and Append
// Link: https://codeforces.com/problemset/problem/1791/C
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0, j = n - 1;
    while (i < j && s[i] != s[j]) {
        i++;
        j--;
    }
    if(i > j) {
        cout << 0 << "\n";
        return;
    }
    int len = j - i + 1;
    cout << len << "\n";
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