// Problem: Jagged Swaps
// Link: https://codeforces.com/problemset/problem/1896/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n; // Declare a variable to store the size of the permutation
        cin >> n; // Read the size of the permutation
        long long a[n]; // Declare an array to store the permutation elements
        for (int i = 0; i < n; i++) // Loop to read the permutation elements
            cin >> a[i]; // Read each element of the permutation
        // input

        if (a[0] == 1) // Check if the first element of the permutation is 1
            cout << "YES" << endl; // If true, print "YES"
        else
            cout << "NO" << endl; // Otherwise, print "NO"
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