-- ──────────────────────────────────────────────────
-- Problem     Weather Observation Station 6
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-06-28, 09:34 p.m.
-- Technique   multiple-like-pattern
-- Time        O(N)
-- Space       O(N)
-- Trick       Use multiple LIKE patterns with OR operators to filter strings starting with specific vowels efficiently.
-- Hint        LIKE 'A%' is case-insensitive in default MySQL collations.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/
SELECT distinct CITY
from STATION 
where CITY LIKE 'A%'
OR CITY LIKE 'E%'
OR CITY LIKE 'I%'
OR CITY LIKE 'O%'
OR CITY LIKE 'U%';
