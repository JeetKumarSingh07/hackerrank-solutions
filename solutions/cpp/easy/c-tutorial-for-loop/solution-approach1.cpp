// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true
// Problem     For Loop
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-04, 11:39 a.m.
// Technique   linear-scan-with-lookup-table
// Time        O(b - a)
// Space       O(1)
// Insight     The implementation iterates through the inclusive range [a, b] and uses a pre-populated vector to map integers 1 through 9 to their English names while applying parity checks for larger values.
// Interview   Before: "How would you handle mapping integers to strings efficiently?" After: "I used a vector lookup for values 1-9 to achieve O(1) access, then applied modulo arithmetic for parity checks. The total time complexity is O(b - a) to cover the inclusive range, ensuring constant space usage."
// Pitfalls    (1) Failing to handle the inclusive range [a, b] by using i < b instead of i <= b.  (2) Incorrectly indexing the labels vector by forgetting the empty string at index 0 for 1-based mapping.  (3) Misinterpreting the parity condition by checking odd numbers before even numbers or vice versa.
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
