// Problem: Chemistry
// Link: https://codeforces.com/problemset/problem/1883/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(n-k <= 1) {
        cout << "YES\n";
        return;
    }
    int l = n-k;
    unordered_map<char, int> freq;
    for(int i = 0; i < n; i++) {
        freq[s[i]]++;
    }
    if(l%2 == 1) {
        int no = 0;
        for(auto pair : freq) {
            if(pair.second%2 == 1) {
                no++;
            }
        }
        if(no - k <= 1) {
            cout << "YES\n";
            return;
        }
    }
    else {
        int no = 0;
        for(auto pair : freq) {
            if(pair.second%2 == 1) {
                no++;
            }
        }
        if(no - k <= 0) {
            cout << "YES\n";
            return;
        }
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