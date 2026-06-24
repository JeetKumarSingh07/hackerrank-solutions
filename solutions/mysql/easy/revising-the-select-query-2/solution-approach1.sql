-- ──────────────────────────────────────────────────
-- Problem     Revising the Select Query II
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-06-24, 04:56 p.m.
-- Technique   conditional-filter-query
-- Time        O(N)
-- Space       O(1)
-- Trick       Use the WHERE clause with logical AND operators to filter rows based on multiple specific column criteria simultaneously.
-- Hint        Ensure column names match schema exactly.
-- ──────────────────────────────────────────────────

SELECT NAME FROM CITY
where CountryCode ='USA'  
and Population > 120000;
