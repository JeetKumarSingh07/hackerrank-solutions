-- ──────────────────────────────────────────────────
-- Link        https://www.hackerrank.com/challenges/the-company/problem?isFullScreen=true
-- Problem     New Companies
-- Difficulty  Medium
-- Subdomain   Advanced Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-07-24, 07:57 p.m.
-- Technique   correlated-subquery-aggregation
-- Time        O(N * M) where N is the number of compa…
-- Space       O(1)
-- Insight     The query aggregates distinct counts for each hierarchical level by executing correlated subqueries for every company record found in the base table.
-- Interview   Before: "I would join all tables and group by company." After: "Joining large tables with duplicates causes incorrect counts, so I used correlated subqueries with DISTINCT to ensure O(N*M) accuracy while handling the non-numeric string sorting requirement for company_code."
-- Pitfalls    (1) Failing to use DISTINCT leads to incorrect counts because the problem statement explicitly notes that tables may contain duplicate records.  (2) Using standard numeric sorting instead of string sorting for company_code violates the requirement to treat codes like C_10 as coming before C_2.  (3) Joining all tables directly before counting creates a Cartesian product that inflates the counts of employees and managers.
-- ──────────────────────────────────────────────────


select 
c.company_code,
c.founder,
(select count(distinct lead_manager_code)
from Lead_Manager lm
where lm.company_code=c.company_code),
(select count(Distinct senior_manager_code)
from Senior_Manager sm
where sm.company_code = c.company_code),

  (SELECT COUNT(DISTINCT manager_code)
     FROM Manager m
     WHERE m.company_code = c.company_code),
    (SELECT COUNT(DISTINCT employee_code)
     FROM Employee e
     WHERE e.company_code = c.company_code)
FROM Company c
ORDER BY c.company_code;
