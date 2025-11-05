// Problem: One and Two
// Link: https://codeforces.com/problemset/problem/1788/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int freq = 0;
    for (int &x : arr) {
        cin >> x;
        if (x == 2) freq++;
    }
    if(freq%2 != 0) {
        cout << -1 << "\n";
    } else {
        int s = freq/2;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 2) {
                s--;
            }
            if(s == 0) {
                cout << i+1 << "\n";
                break;
            }
        }
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