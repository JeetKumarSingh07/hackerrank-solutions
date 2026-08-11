# ──────────────────────────────────────────────────
# Link        https://www.hackerrank.com/challenges/extra-long-factorials/problem?isFullScreen=true
# Problem     Extra Long Factorials
# Difficulty  Medium
# Subdomain   Implementation
# Platform    HackerRank
# Language    python3
# Status      Accepted
# Submitted   2026-08-11, 12:21 p.m.
# Technique   built-in-math-factorial
# Time        O(n^2 log n)
# Space       O(n log n)
# Insight     The implementation leverages Python's arbitrary-precision integer arithmetic to compute the factorial of n by iteratively multiplying integers up to n.
# Interview   Before: "I would implement a custom multiplication algorithm to handle large numbers." After: "Python's math.factorial handles arbitrary-precision integers natively, which is efficient for this problem's constraints. The time complexity is O(n^2 log n) due to the cost of multiplying increasingly large numbers, and it correctly handles n > 20 as required."
# Pitfalls    (1) Assuming standard 64-bit integer types can store the result for n > 20, which violates the problem's explicit warning about overflow.  (2) Failing to account for the memory growth of the result, which requires O(n log n) space to store the digits of n!.
# ──────────────────────────────────────────────────

import math

n = int(input().strip())
print(math.factorial(n))
