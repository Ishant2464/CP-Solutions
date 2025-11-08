// Problem: Vasilije in Cacak
// Link: https://codeforces.com/problemset/problem/1878/C
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k, x;
    cin >> n >> k >> x;
    long long mini, maxi;
    mini = k*(k+1)/2;
    maxi = (n*(n+1)/2) - ((n-k)*(n-k+1)/2);
    if(x <= maxi && x >= mini) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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