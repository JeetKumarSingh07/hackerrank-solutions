-- ──────────────────────────────────────────────────
-- Problem     Weather Observation Station 12
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-07-01, 02:09 p.m.
-- Technique   multi-clause-not-like
-- Time        O(N * M)
-- Space       O(1)
-- Trick       Use multiple NOT LIKE clauses to filter strings by both start and end characters simultaneously without complex regex overhead.
-- Hint        SQL LIKE patterns are case-insensitive in many default MySQL collations.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/
select distinct CITY from STATION 
where( CITY NOT like '%A'
and CITY NOT like '%E'and CITY NOT like '%I'
and CITY NOT like '%O'
and CITY NOT like '%U')
and
( CITY NOT like 'A%'
and CITY NOT like 'E%'and CITY NOT like 'I%'
and CITY NOT like 'O%'
and CITY NOT like 'U%');

