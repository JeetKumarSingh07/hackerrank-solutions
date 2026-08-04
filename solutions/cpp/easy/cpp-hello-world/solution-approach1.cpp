// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/cpp-hello-world/problem?isFullScreen=true
// Problem     Say "Hello, World!" With C++
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-04, 11:50 a.m.
// Technique   standard-output-printf
// Time        O(1)
// Space       O(1)
// Insight     The program writes the literal string constant to the standard output stream using the C-style printf function.
// Interview   Before: "How do you output text in C++?" After: "You can use printf or cout. This implementation uses printf to output the string in O(1) time, ensuring the exact characters match the required output format."
// Pitfalls    (1) Failing to include the cstdio header when using the printf function.  (2) Adding an unnecessary newline character that deviates from the exact sample output requirements.
// ──────────────────────────────────────────────────

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    printf("Hello, World!");
    return 0;
}
