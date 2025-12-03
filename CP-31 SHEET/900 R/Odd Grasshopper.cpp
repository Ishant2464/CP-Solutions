// Problem: Odd Grasshopper
// Link: https://codeforces.com/problemset/problem/1607/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long start, jumps; // 'start' is the initial position, 'jumps' is the number of jumps
		cin >> start >> jumps;

		long long final_pos; // Variable to store the final position after all jumps

		// Determine the effect of the number of jumps on the position
		if (jumps % 4 == 1)
			final_pos = -jumps; // If jumps % 4 == 1, move left by 'jumps'
		else if (jumps % 4 == 2)
			final_pos = 1; // If jumps % 4 == 2, move right by 1
		else if (jumps % 4 == 3)
			final_pos = jumps + 1; // If jumps % 4 == 3, move right by 'jumps + 1'
		else if (jumps % 4 == 0)
			final_pos = 0; // If jumps % 4 == 0, no net movement

		// Adjust the final position based on the parity of the starting position
		if (start % 2 == 0)
			final_pos = start + final_pos; // If starting position is even, add the calculated position
		else
			final_pos = start - final_pos; // If starting position is odd, subtract the calculated position

		cout << final_pos << endl;
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
