-- ──────────────────────────────────────────────────
-- Link        https://www.hackerrank.com/challenges/binary-search-tree-1/problem?isFullScreen=true
-- Problem     Binary Tree Nodes
-- Difficulty  Medium
-- Subdomain   Advanced Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-07-24, 07:59 p.m.
-- Technique   case-when-subquery-membership
-- Time        O(N^2)
-- Space       O(N)
-- Insight     The query classifies nodes by checking if the parent is null for the root, if the node exists in the parent column for inner nodes, or as a leaf otherwise.
-- Interview   Before: "How would you categorize nodes in a tree structure using SQL?" After: "I use a CASE statement to check node roles. Since the subquery runs for each row, the time complexity is O(N^2), which is acceptable for standard tree sizes provided in the problem."
-- Pitfalls    (1) Failing to handle the root node case where P is NULL, which would incorrectly classify it as a leaf if only checking the subquery.  (2) Assuming the subquery for inner nodes is efficient without considering that it executes for every row in the BST table.
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
