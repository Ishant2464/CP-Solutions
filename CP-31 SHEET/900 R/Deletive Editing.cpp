// Problem: Deletive Editing
// Link: https://codeforces.com/problemset/problem/1666/D
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s, t;
    cin >> s >> t;
    unordered_map<char, int> mp;
    for(int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    for(int i = 0; i < t.size(); i++) {
        if(mp.find(t[i]) == mp.end() || mp[t[i]] == 0) {
            cout << "NO\n";
            return;
        }
        mp[t[i]]--;
    }
    for(auto p : mp) {
        int d = p.second;
        while(d > 0) {
            int i = 0;
            bool del = false;
            while(i < s.size() && !del) {
                if(s[i] == p.first) {
                    s.erase(i, 1);
                    del = true;
                }
                i++;
            }
            d--;
        }
    }
    if(s == t) {
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