// Problem: Doremy's Paint 3
// Link: https://codeforces.com/problemset/problem/1890/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    if(freq.size() > 2) {
        cout << "No\n";
        return;
    }
    else {
        if(freq.size() == 1) {
            cout << "Yes\n";
            return;
        }
        else {
            auto it = freq.begin();
            int val1 = it->second;
            it++;
            int val2 = it->second;
            if(abs(val1 - val2) <= 1) {
                cout << "Yes\n";
            }
            else {
                cout << "No\n";
            }
        }
    }
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
