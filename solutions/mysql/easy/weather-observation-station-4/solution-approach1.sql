-- ──────────────────────────────────────────────────
-- Problem     Weather Observation Station 4
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-06-28, 09:33 p.m.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/
SELECT count(CITY )- count(Distinct CITY) FROM STATION 
