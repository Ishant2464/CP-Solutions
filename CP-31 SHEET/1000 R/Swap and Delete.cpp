// Problem: Swap and Delete
// Link: https://codeforces.com/problemset/submit
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int o = 0, z = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0') {
            z++;
        }
        else {
            o++;
        }
    }
    int l = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0' && o > 0) {
            o--;
            l++;
        }
        else if(s[i] == '1' && z > 0) {
            z--;
            l++;
        }
        else {
            break;
        }
    }
    cout << s.size() - l << "\n";
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