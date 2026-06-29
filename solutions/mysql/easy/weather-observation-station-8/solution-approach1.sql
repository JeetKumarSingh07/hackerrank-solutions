-- ──────────────────────────────────────────────────
-- Problem     Weather Observation Station 8
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-06-29, 11:25 a.m.
-- Technique   like-pattern-matching
-- Time        O(N*M)
-- Space       O(N)
-- Trick       Use multiple LIKE patterns with wildcards to filter strings starting and ending with vowels, avoiding complex regex overhead.
-- Hint        LIKE is case-insensitive in default MySQL collations.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/
select Distinct CITY
from STATION 
where (CITY like '%A'
or CITY like '%E'
or CITY like '%I'
or CITY like '%O'
or CITY like '%U')
and 
(CITY like 'A%'
or CITY like 'E%'
or CITY like 'I%'
or CITY like 'O%'
or CITY like 'U%');
