// Problem: Forked!
// Link: https://codeforces.com/problemset/problem/1904/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    int xk, yk, xq, yq;
    cin >> xk >> yk;
    cin >> xq >> yq;

    vector<pair<int, int>> moves = {
        {a, b}, {a, -b}, {-a, b}, {-a, -b},
        {b, a}, {b, -a}, {-b, a}, {-b, -a}
    };

    set<pair<int, int>> fromKing, fromQueen;

    // All positions from which a knight can attack the king
    for (auto [dx, dy] : moves)
        fromKing.insert({xk - dx, yk - dy});

    // All positions from which a knight can attack the queen
    for (auto [dx, dy] : moves)
        fromQueen.insert({xq - dx, yq - dy});

    int cnt = 0;
    for (auto pos : fromKing)
        if (fromQueen.count(pos)) cnt++;

    cout << cnt << "\n";
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