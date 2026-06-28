-- ──────────────────────────────────────────────────
-- Problem     Weather Observation Station 3
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-06-28, 08:24 p.m.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/
SELECT  distinct CITY from STATION 
where ID%2 =0;
