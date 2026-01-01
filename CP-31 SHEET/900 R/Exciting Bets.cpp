// Problem: Exciting Bets
// Link: https://codeforces.com/problemset/problem/1543/A
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long a, b;
    cin >> a >> b;
    long long dif = abs(a -b);
    if(dif == 0) {
        cout << 0 << " " << 0 << "\n";
        return;
    }
    long long chng = a%dif;
    long long ans = min(chng, dif - chng);
    cout << dif << " " << ans << "\n";
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