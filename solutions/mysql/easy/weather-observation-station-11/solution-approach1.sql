-- ──────────────────────────────────────────────────
-- Problem     Weather Observation Station 11
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-07-01, 02:06 p.m.
-- Technique   multi-clause-not-like
-- Time        O(N)
-- Space       O(N)
-- Trick       Use logical OR to combine exclusion filters for both starting and ending characters to identify strings failing either vowel constraint.
-- Hint        Leverage NOT LIKE with wildcard patterns for character exclusion.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/
SELECT distinct CITY from STATION 
where (CITY not like 'A%'
and  CITY not like 'E%'
and  CITY not like 'I%'and  CITY not like 'O%'and  CITY not like 'U%')
OR
(CITY not like '%A'
and  CITY not like '%E'
and  CITY not like '%I'and  CITY not like '%O'and  CITY not like '%U');
