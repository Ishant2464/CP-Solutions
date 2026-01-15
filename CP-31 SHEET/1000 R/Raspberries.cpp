// Problem: Raspberries
// Link: https://codeforces.com/problemset/problem/1883/C
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    if(k % 2 == 1) {
        int ans = INT_MAX;
        for(int i = 0; i < n; i++) {
            int rem = k - (v[i] % k);
            if(rem == k) rem = 0;
            ans = min(ans, rem);
        }
        cout << ans << "\n";
    }
    else {
        int ev2 = 0;
        int ev4 = 0;
        int has3 = 0;
        for(int i = 0; i < n; i++) {
            if(v[i]%2 == 0) ev2++;
            if(v[i]%4 == 0) ev4++;
            if(v[i]%k == 3) has3++;
        }
        if(k == 2) {
            if(ev2 >= 1) {
                cout << 0 << "\n";
            }
            else {
                cout << 1 << "\n";
            }
        }
        else {
            if(ev4 > 0 || ev2 >= 2) {
                cout << 0 << "\n";
            }
            else if(ev2 == 1 || has3 > 0) {
                cout << 1 << "\n";
            }
            else {
                cout << 2 << "\n";
            }
        }
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