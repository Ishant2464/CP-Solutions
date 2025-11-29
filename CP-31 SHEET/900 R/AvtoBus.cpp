// Problem: AvtoBus
// Link: https://codeforces.com/problemset/problem/1679/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    if (n < 4 || (n % 2 == 1)) {
        cout << -1 << "\n";
        return;
    }

    long long mini, maxi;

    maxi = n / 4;

    if (n % 6 == 0) {
        mini = n / 6;
    } 
    else {
        mini = n / 6 + 1;
    }

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