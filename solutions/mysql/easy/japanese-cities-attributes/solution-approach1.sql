-- ──────────────────────────────────────────────────
-- Problem     Japanese Cities' Attributes
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-06-26, 11:25 a.m.
-- Technique   simple-where-clause
-- Time        O(N)
-- Space       O(1)
-- Trick       Use a standard WHERE filter to restrict the result set based on a specific column value.
-- Hint        Ensure the column is indexed for optimal performance.
-- ──────────────────────────────────────────────────

SELECT * from CITY
where COUNTRYCODE = 'JPN';
