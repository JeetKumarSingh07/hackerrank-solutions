-- ──────────────────────────────────────────────────
-- Problem     Revising the Select Query I
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-06-24, 01:04 a.m.
-- ──────────────────────────────────────────────────

SELECT * from 
CITY
where CountryCode='USA'
AND population>100000;
