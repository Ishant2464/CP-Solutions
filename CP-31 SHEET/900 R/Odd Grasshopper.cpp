// Problem: Odd Grasshopper
// Link: https://codeforces.com/problemset/problem/1607/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long x, n;
	cin >> x >> n;
	if(x % 2 == 0) {
		if(n % 4 == 0) {
			cout << x << "\n";
		}
		else if(n % 4 == 1) {
			cout << x - n << "\n";
		}
		else if(n % 4 == 2) {
			cout << x + 1 << "\n";
		}
		else {
			cout << x + 1 + n << "\n";
		}
	}
	else {
		if(n % 4 == 0) {
			cout << x << "\n";
		}
		else if(n % 4 == 1) {
			cout << x + n << "\n";
		}
		else if(n % 4 == 2) {
			cout << x - 1 << "\n";
		}
		else {
			cout << x - 1 - n << "\n";
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
