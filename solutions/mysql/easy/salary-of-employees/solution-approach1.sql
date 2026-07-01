-- ──────────────────────────────────────────────────
-- Problem     Employee Salaries
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-07-01, 02:12 p.m.
-- Technique   conditional-row-filtering
-- Time        O(N log N)
-- Space       O(N)
-- Trick       Use a standard WHERE clause with logical AND operators to filter rows before applying the mandatory ORDER BY clause for sorting.
-- Hint        ORDER BY defaults to ASC; use employee_id for deterministic results.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/
select name from Employee 
where salary >2000 and months <10
order by employee_id;
