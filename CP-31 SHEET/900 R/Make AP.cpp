// Problem: Make AP
// Link: https://codeforces.com/problemset/problem/1624/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b , c;
    cin >> a >> b >> c;
    int d1 = b - a;
    int d2 = c - b;
    if(d1 == d2) {
        cout << "YES" << "\n";
        return;
    }
    if((c + a)%2 == 0 && ((c + a)/2)%b == 0) {
        cout << "YES\n";
        return;
    }
    int an = b - d2;
    int cn = b + d1;
    if((an > 0 && an%a == 0) || (cn > 0 && cn%c == 0)) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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