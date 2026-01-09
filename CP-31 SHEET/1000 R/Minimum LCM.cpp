// Problem: Minimum LCM
// Link: https://codeforces.com/problemset/problem/1765/M
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    if(n % 2 == 0) {
        cout << n / 2 << " " << n / 2 << "\n";
        return;
    }
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            long long d = n / i;
            cout << d << " " << n - d << "\n";
            return;
        }
    }
    cout << "1 " << n - 1 << "\n";
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