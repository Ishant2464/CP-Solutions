// Problem: Erase First or Second Letter
// Link: https://codeforces.com/problemset/problem/1917/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> freq;
    int cnt = 1;
    freq[s[0]]++;
    for(int i  = 1; i < n; i++) {
        if(freq.find(s[i]) == freq.end()) {
            freq[s[i]]++;
        }
        cnt += freq.size();
    }
    cout << cnt << "\n";
}

/**
 * This is the main function where the program starts.
 */
int main() {
    // 1. FAST I/O: This speeds up cin and cout dramatically.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 2. FILE I/O: This block only runs on your local machine.
#ifndef ONLINE_JUDGE
    // Redirects input from "input.txt"
    freopen("input.txt", "r", stdin);
    // Redirects output to "output.txt"
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}