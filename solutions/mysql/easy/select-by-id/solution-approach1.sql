-- ──────────────────────────────────────────────────
-- Problem     Select By ID
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-06-25, 10:08 a.m.
-- Technique   primary-key-lookup
-- Time        O(1)
-- Space       O(1)
-- Trick       Use the primary key in the WHERE clause to leverage B-tree indexing for constant time retrieval.
-- Hint        Primary keys are indexed by default in MySQL.
-- ──────────────────────────────────────────────────

SELECT * from CITY 
where ID = 1661;
