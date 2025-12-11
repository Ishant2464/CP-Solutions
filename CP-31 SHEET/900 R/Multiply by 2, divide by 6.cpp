// Problem: Multiply by 2, divide by 6
// Link: https://codeforces.com/problemset/problem/1374/B
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    int n2 = 0, n3 = 0;
    if(n == 1) {
        cout << 0 << "\n";
        return;
    }
    if(n % 3 != 0) {
        cout << -1 << "\n";
        return;
    }
    while(n % 2 == 0 || n % 3 == 0) {
        if(n%2 == 0) {
            n2++;
            n = n/2;
        }
        if(n % 3 == 0) {
            n3++;
            n = n/3;
        }
    }
    if(n != 1 || n2 > n3) {
        cout << -1 << "\n";
        return;
    }
    int ans = n3 - n2 + n3;
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