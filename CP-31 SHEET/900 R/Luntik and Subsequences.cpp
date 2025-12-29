// Problem: Luntik and Subsequences
// Link: https://codeforces.com/problemset/problem/1582/B
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> v(n);
    int o = 0;
    long long z = 1;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] == 1) {
            o++;
        }
        if(v[i] == 0) {
            z = z*2;
        }
    }
    cout << o*z << "\n";
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