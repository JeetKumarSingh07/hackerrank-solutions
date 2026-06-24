-- ──────────────────────────────────────────────────
-- Problem     Revising the Select Query II
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-06-24, 04:56 p.m.
-- ──────────────────────────────────────────────────

SELECT NAME FROM CITY
where CountryCode ='USA'  
and Population > 120000;
