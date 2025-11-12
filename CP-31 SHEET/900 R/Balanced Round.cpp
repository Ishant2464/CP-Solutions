// Problem: Balanced Round
// Link: https://codeforces.com/problemset/problem/1850/D
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int curr = 1; int maxi = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] - arr[i - 1] <= k) {
            curr++;
            maxi = max(curr, maxi);
        }
        else {
            curr = 1;
        }
    }
    cout << n - maxi << "\n";
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