-- ──────────────────────────────────────────────────
-- Problem     Weather Observation Station 4
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-06-28, 09:33 p.m.
-- Technique   count-difference-aggregation
-- Time        O(N)
-- Space       O(N)
-- Trick       Subtract the count of unique cities from the total count to isolate the number of duplicate entries.
-- Hint        Uses count(DISTINCT) to identify unique values.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/
SELECT count(CITY )- count(Distinct CITY) FROM STATION 
