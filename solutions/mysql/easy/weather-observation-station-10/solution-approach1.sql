-- ──────────────────────────────────────────────────
-- Problem     Weather Observation Station 10
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-06-29, 11:29 a.m.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/
SELECT  distinct CITY from STATION 
where CITY  not like '%A'
and CITY  not like '%E'
and CITY  not like '%I'and CITY  not like '%O'and CITY  not like '%U';
