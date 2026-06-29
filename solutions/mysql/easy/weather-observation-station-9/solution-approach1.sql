-- ──────────────────────────────────────────────────
-- Problem     Weather Observation Station 9
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-06-29, 11:28 a.m.
-- Technique   multi-pattern-exclusion
-- Time        O(N)
-- Space       O(N)
-- Trick       Use multiple NOT LIKE clauses with wildcard patterns to filter out strings starting with specific vowels.
-- Hint        Leverage SQL pattern matching with the percent wildcard.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/select distinct CITY 
FROM STATION where
CITY NOT LIKE 'A%'
AND CITY NOT LIKE 'E%'
AND CITY NOT LIKE 'I%'
AND CITY NOT LIKE 'O%'
AND CITY NOT LIKE 'U%';
