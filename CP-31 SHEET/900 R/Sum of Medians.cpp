// Problem: Sum of Medians
// Link: https://codeforces.com/problemset/problem/1440/B
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    int l = n * k;
    vector<long long> v(l);
    for(int i = 0; i < l; i++) {
        cin >> v[i];
    }
    int pos;
    if(n % 2 == 0) {
        pos = n/2;
    }
    else {
        pos = n/2 + 1;
    }
    int i = l - 1 - n + pos;
    long long sum = 0;
    int d = l - (i);
    while(k >= 1) {
        sum += v[i];
        i = i - d;
        k--;
    }
    cout << sum << "\n";
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