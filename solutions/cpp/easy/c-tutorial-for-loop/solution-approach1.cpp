// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true
// Problem     For Loop
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-04, 11:39 a.m.
// ──────────────────────────────────────────────────

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // Array for 1-based indexing (index 1 = "one", etc.)
    vector<string> labels = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            cout << labels[i] << "\n";
        } else if (i % 2 == 0) {
            cout << "even\n";
        } else {
            cout << "odd\n";
        }
    }

    return 0;
}
