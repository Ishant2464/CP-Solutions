// Problem: Target Practice
// Link: https://codeforces.com/problemset/problem/1873/C
#include <bits/stdc++.h>
using namespace std;

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<char>> target(10, vector<char>(10, '.'));
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cin >> target[i][j];
        }
    }
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            char cell = target[i][j];
            if (cell == 'X') {
                if(i == 0 || j == 0 || i == 9 || j == 9) {
                    score += 1;
                } else if (i == 1 || j == 1 || i == 8 || j == 8) {
                    score += 2;
                } else if(i == 2 || j == 2 || i == 7 || j == 7) {
                    score += 3;
                }
                else if(i == 3 || j == 3 || i == 6 || j == 6) {
                    score += 4;
                } else {
                    score += 5;
                }
            }
        }
    }
    cout << score << "\n";
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