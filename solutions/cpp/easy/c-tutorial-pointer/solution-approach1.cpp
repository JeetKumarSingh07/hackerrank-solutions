// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true
// Problem     Pointer
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-04, 12:07 p.m.
// Technique   pointer-dereference-update
// Time        O(1)
// Space       O(1)
// Insight     The function modifies the original variables in the caller's scope by dereferencing the provided memory addresses to store the calculated sum and absolute difference.
// Interview   Before: "How do you modify variables passed to a function in C++?" After: "You use pointers to access the memory addresses directly. By dereferencing the pointers, you perform an O(1) update on the original values, ensuring the sum and absolute difference are correctly stored in the caller's memory."
// Pitfalls    (1) Failing to use the dereference operator (*) when assigning values to the pointers, which would overwrite the memory address instead of the stored integer.  (2) Neglecting to include the <stdlib.h> header, which is required for the abs() function used to calculate the absolute difference.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <stdlib.h> // Included for abs()

void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = abs(*a - *b);
    
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
