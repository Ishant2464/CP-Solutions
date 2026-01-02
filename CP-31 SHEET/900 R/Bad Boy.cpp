// Problem: Bad Boy
// Link: https://codeforces.com/problemset/problem/1537/B
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n, m, i, j;;
    cin >> n >> m >> i >> j;
    long long h1 = j - 1;
    long long h2 = m - j;
    long long v1 = i - 1;
    long long v2 = n - i;
    if(h2 > h1 || v2 > v1) {
        cout << n << " " << 1 << " " << 1 << " " << m << "\n";
    }
    else {
        cout << 1 << " " << 1 << " " << n << " " << m << "\n";
    }
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