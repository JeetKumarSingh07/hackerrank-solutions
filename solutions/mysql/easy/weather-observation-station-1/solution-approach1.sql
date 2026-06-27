-- ──────────────────────────────────────────────────
-- Problem     Weather Observation Station 1
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-06-27, 06:48 p.m.
-- Technique   basic-select-projection
-- Time        O(N)
-- Space       O(N)
-- Trick       Directly project specific columns from the table without filtering or aggregation to retrieve the full dataset.
-- Hint        Standard SQL projection using comma-separated column names.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/
SELECT  CITY,STATE from STATION 
