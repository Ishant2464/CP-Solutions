// Problem: Strange Partition
// Link: https://codeforces.com/problemset/problem/1471/A
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    long long sum = 0;
    long long maxi = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        maxi += (a[i] + x - 1)/x;
        sum += a[i];
    }
    long long mini = (sum + x - 1)/x;
    cout << mini << " " << maxi << "\n";
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