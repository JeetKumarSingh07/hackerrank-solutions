-- ──────────────────────────────────────────────────
-- Problem     Japanese Cities' Names
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-06-28, 08:24 p.m.
-- Technique   simple-column-filter
-- Time        O(n)
-- Space       O(n)
-- Trick       Use a standard WHERE clause to filter rows by a specific string literal value in a relational database.
-- Hint        Ensure the column name matches the schema exactly.
-- ──────────────────────────────────────────────────

SELECT NAME from CITY 
where  COUNTRYCODE ='JPN';
