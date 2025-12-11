// Problem: 01 Game
// Link: https://codeforces.com/problemset/problem/1373/B
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    if(s.size() == 1) {
        cout << "NET\n";
        return;
    }
    int c = 1;
    int i = 1;
    while(i < s.size()) {
        if(s[i] != s[i - 1]) {
            s.erase(i-1,  2);
            c++;
            if(i > 2) i = i - 2;
            else i = 0;
        }
        i++;
    }
    if(c % 2 == 1) {
        cout << "NET\n";
    }
    else {
        cout << "DA\n";
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