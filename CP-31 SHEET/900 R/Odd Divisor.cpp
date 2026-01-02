// Problem: Odd Divisor
// Link: https://codeforces.com/problemset/problem/1475/A
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    while(n > 1 && n%2 == 0) {
        n = n / 2;
    }
    if(n == 1) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
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