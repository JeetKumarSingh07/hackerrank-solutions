-- ──────────────────────────────────────────────────
-- Link        https://www.hackerrank.com/challenges/binary-search-tree-1/problem?isFullScreen=true
-- Problem     Binary Tree Nodes
-- Difficulty  Medium
-- Subdomain   Advanced Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-07-24, 07:59 p.m.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/
SELECT n,
case
when p is null then "Root"
when n in (select p from bst) then  "Inner"
else "Leaf"
 END
from bst
order by n 
