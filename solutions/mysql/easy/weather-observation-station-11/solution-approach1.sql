-- ──────────────────────────────────────────────────
-- Problem     Weather Observation Station 11
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-07-01, 02:06 p.m.
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
