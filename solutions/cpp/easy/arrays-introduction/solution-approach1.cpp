// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true
// Problem     Arrays Introduction
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-04, 12:23 p.m.
// Technique   stack-allocated-array-reverse-iteration
// Time        O(n)
// Space       O(n)
// Insight     The implementation utilizes a variable-length array to store input integers and iterates backward from the last index to the first to print them in reverse order.
// Interview   Before: "I will use a vector to store the input." After: "Since the size is known at runtime, I used a stack-allocated array of size n, which provides O(n) time and O(n) space complexity while respecting the problem's constraints on N."
// Pitfalls    (1) Accessing arr[n] instead of arr[n-1] causes an out-of-bounds error because array indexing is zero-based.  (2) Starting the reverse loop at n instead of n-1 results in printing an uninitialized memory value at the first position.
// ──────────────────────────────────────────────────

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Print in reverse order
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
