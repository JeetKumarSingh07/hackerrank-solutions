-- ──────────────────────────────────────────────────
-- Problem     Weather Observation Station 7
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-06-29, 11:24 a.m.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/
select distinct CITY
FROM STATION 
where CITY LIKE '%A'
Or CITY LIKE '%E'
Or CITY LIKE '%I'Or CITY LIKE '%O'Or CITY LIKE '%U';
