// Problem: Sleeping Through Classes
// Link: https://codeforces.com/contest/2173/problem/A
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
	string s;
	cin >> s;
    int i = 0;
    int ans = 0;
    int c = -1;
    while(i < s.size()) {
        if(s[i] == '1') {
            c = i + k;
        }
        else {
            if(i > c) {
                ans++;
            }
        }
        i++;
    }
    cout << ans << "\n";
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