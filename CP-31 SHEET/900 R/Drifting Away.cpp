// Problem: Drifting Away
// link: https://codeforces.com/contest/2169/problem/B
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    if(s.size() == 1) {
        cout << 1 << "\n";
        return;
    }
    char prev = s[0];
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == '*') {
            if(prev == '*' || prev == '>') {
                cout << -1 << '\n';
                return;
            }
            else {
                prev = s[i];
                continue;
            }
        }
        else if(s[i] == '<') {
            if(prev == '*' || prev == '>') {
                cout << -1 << "\n";
                return;
            }
            else {
                prev = s[i];
                continue;
            }
        }
        else {
            prev = s[i];
            continue;
        }
    }
    int lst = 0;
    int grt = 0;
    bool star = false;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '*') star = true;
        if(s[i] == '<') lst++;
        else if(s[i] == '>') grt++;
    }
    if(star) {
        cout << max(lst, grt) + 1 << "\n";
    }
    else {
        cout << max(lst, grt) << "\n";
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


