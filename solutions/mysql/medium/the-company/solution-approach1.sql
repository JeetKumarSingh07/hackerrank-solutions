-- ──────────────────────────────────────────────────
-- Link        https://www.hackerrank.com/challenges/the-company/problem?isFullScreen=true
-- Problem     New Companies
-- Difficulty  Medium
-- Subdomain   Advanced Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-07-24, 07:57 p.m.
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
