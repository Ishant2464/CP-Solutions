// Problem: Longest Divisors Interval
// Link: https://codeforces.com/problemset/problem/1855/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    int i = 1;
    while(n % (i + 1) == 0) {
        i++;
    }
    cout << i << "\n";
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