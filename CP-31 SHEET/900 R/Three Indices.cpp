// Problem: Three Indices
// Link: https://codeforces.com/problemset/problem/1380/A
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    stack<int> st;
    vector<int> l(n, -1);
    vector<int> r(n, -1);
    for(int i = 0; i < n; i++) {
        while(!st.empty() && v[st.top()] > v[i]) {
            st.pop();
        }
        if(!st.empty()) {
            l[i] = st.top();
        }
        st.push(i);
    }
    while(!st.empty()) st.pop();
    for(int i = n-1; i >= 0; i--) {
        while(!st.empty() && v[st.top()] > v[i]) {
            st.pop();
        }
        if(!st.empty()) {
            r[i] = st.top();
        }
        st.push(i);
    }
    for(int i = 0; i < n; i++) {
        if(l[i] != -1 && r[i] != -1) {
            cout << "YES\n";
            cout << l[i]+1 << " " << i+1 << " " << r[i]+1 << "\n";
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