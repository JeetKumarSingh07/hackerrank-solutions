-- ──────────────────────────────────────────────────
-- Problem     Weather Observation Station 3
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-06-28, 08:24 p.m.
-- Technique   modulo-filter-distinct
-- Time        O(N log N)
-- Space       O(N)
-- Trick       Use the modulo operator on the ID column to filter even rows and apply DISTINCT to remove duplicate city names.
-- Hint        ID % 2 = 0 identifies even-numbered rows.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/
SELECT  distinct CITY from STATION 
where ID%2 =0;
