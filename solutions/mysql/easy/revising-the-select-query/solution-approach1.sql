-- ──────────────────────────────────────────────────
-- Problem     Revising the Select Query I
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-06-24, 01:04 a.m.
-- Technique   sql-conditional-filter
-- Time        O(N)
-- Space       O(1)
-- Trick       Use the WHERE clause with logical AND operators to filter rows based on multiple column criteria simultaneously.
-- Hint        Ensure column names match schema exactly.
-- ──────────────────────────────────────────────────

SELECT * from 
CITY
where CountryCode='USA'
AND population>100000;
