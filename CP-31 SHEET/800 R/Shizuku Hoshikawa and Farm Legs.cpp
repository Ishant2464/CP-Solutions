// Problem: Shizuku Hoshikawa and Farm Legs
// link: https://codeforces.com/contest/2171/problem/A
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    if(n % 2 == 1) {
        cout << 0 << "\n";
        return;
    }
    int ans = n/4 + 1;
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