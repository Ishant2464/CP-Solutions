// Problem: Make it Divisible by 25
// Link: https://codeforces.com/problemset/problem/1593/B
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    long long d = n;
    unordered_map<int, vector<int>> mp;
    int l = 1;
    while(d > 0) {
        int dgt = d%10;
        mp[dgt].push_back(l);
        l++;
        d = d/10;
    }
    int d1 = INT_MAX, d2 = INT_MAX, d3 = INT_MAX, d4 = INT_MAX;
    if(mp[0].size() >= 2) {
        d1 = mp[0][1] - 2;
    }
    if(mp[0].size() > 0 && mp[5].size() > 0) {
        int pos = mp[0][0];
        vector<int> v = mp[5];
        for(int i = v.size() - 1; i >= 0; i--) {
            if(v[i] > pos) {
                d2 = v[i] - 2;
            }
        }
    }
    if(mp[2].size() > 0 && mp[5].size() > 0) {
        int pos = mp[5][0];
        vector<int> v = mp[2];
        for(int i = v.size() - 1; i >= 0; i--) {
            if(v[i] > pos) {
                d3 = v[i] - 2;
            }
        }
    }
    if(mp[7].size() > 0 && mp[5].size() > 0) {
        int pos = mp[5][0];
        vector<int> v = mp[7];
        for(int i = v.size() - 1; i >= 0; i--) {
            if(v[i] > pos) {
                d4 = v[i] - 2;
            }
        }
    }
    int ans = min(d1, min(d2, min(d3, d4)));
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