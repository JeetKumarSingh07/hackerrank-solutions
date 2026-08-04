// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true
// Problem     Variable Sized Arrays
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-04, 12:27 p.m.
// Technique   vector-of-vectors
// Time        O(N + Q + total_elements)
// Space       O(total_elements)
// Insight     The implementation uses a vector of vectors to store variable-length arrays, allowing direct O(1) access to any element via nested indexing.
// Interview   Before: "I would use a 2D array with fixed dimensions." After: "Using a vector of vectors is more efficient here, as it handles variable row lengths in O(N + total_elements) time and space, ensuring O(1) access for each of the Q queries."
// Pitfalls    (1) Failing to account for the total number of elements across all sub-arrays when calculating memory usage.  (2) Assuming all sub-arrays have the same length, which contradicts the variable-sized nature of the problem.  (3) Accessing indices i or j that exceed the bounds of the vector or the specific sub-vector.
// ──────────────────────────────────────────────────

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> a(n);

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        a[i].resize(k); 
        
        for (int j = 0; j < k; j++) {
            cin >> a[i][j];
        }
    }

    for (int q_num = 0; q_num < q; q_num++) {
        int i, j;
        cin >> i >> j;
        cout << a[i][j] << "\n";
    }

    return 0;
}
