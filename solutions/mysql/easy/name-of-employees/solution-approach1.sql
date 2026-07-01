-- ──────────────────────────────────────────────────
-- Problem     Employee Names
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-07-01, 02:10 p.m.
-- Technique   lexicographical-sort-query
-- Time        O(N log N)
-- Space       O(N)
-- Trick       Use the ORDER BY clause to sort string columns alphabetically by default in SQL.
-- Hint        Default sort order is ascending.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/
select name from Employee order by name;
