-- ──────────────────────────────────────────────────
-- Problem     Weather Observation Station 10
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-07-01, 02:06 p.m.
-- Technique   multi-pattern-exclusion
-- Time        O(N)
-- Space       O(N)
-- Trick       Use multiple NOT LIKE clauses to filter strings ending in specific characters, which is more readable than complex regex in standard SQL.
-- Hint        Use NOT LIKE with wildcard % for suffix matching.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/
SELECT  distinct CITY from STATION 
where CITY  not like '%A'
and CITY  not like '%E'
and CITY  not like '%I'and CITY  not like '%O'and CITY  not like '%U';
