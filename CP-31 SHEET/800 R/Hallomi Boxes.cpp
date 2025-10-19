// Problem: Halloumi Boxes (CP31 #1)
// Rating: 800
// Approach: Greedy + Sorting
// Link: https://codeforces.com/problemset/problem/1903/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        vector<int> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());
 
        if (a == sorted_a || k >= 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
 
    return 0;
}