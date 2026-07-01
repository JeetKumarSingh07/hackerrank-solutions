-- ──────────────────────────────────────────────────
-- Problem     Higher Than 75 Marks
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-07-01, 02:10 p.m.
-- ──────────────────────────────────────────────────

select Name 
from STUDENTS
where marks >75
order by right (Name , 3),(ID) asc;
