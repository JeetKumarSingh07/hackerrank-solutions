// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true
// Problem     Functions
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-04, 11:59 a.m.
// Technique   sequential-comparison-max-tracking
// Time        O(1)
// Space       O(1)
// Insight     The function maintains a running maximum by sequentially comparing the current maximum value against each subsequent argument.
// Interview   Before: "I would use a sorting algorithm to find the maximum." After: "Sorting is unnecessary here; a simple O(1) sequential comparison is more efficient for a fixed set of four integers."
// Pitfalls    (1) Failing to initialize the running maximum with the first argument, which could lead to incorrect results if all inputs are negative.  (2) Using an incorrect comparison operator that fails to update the maximum when values are equal.
// ──────────────────────────────────────────────────

#include <iostream>
#include <cstdio>
using namespace std;
int max_of_four(int a, int b, int c, int d) {
    int max_val = a;
    if (b > max_val) max_val = b;
    if (c > max_val) max_val = c;
    if (d > max_val) max_val = d;
    return max_val;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
