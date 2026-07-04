-- ──────────────────────────────────────────────────
-- Problem     Type of Triangle
-- Difficulty  Easy
-- Subdomain   Advanced Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-07-04, 11:43 a.m.
-- Technique   case-when-logic
-- Time        O(N)
-- Space       O(1)
-- Trick       Check the triangle inequality theorem first to invalidate impossible shapes before categorizing the remaining valid triangles by side equality.
-- Hint        Order matters: check invalid cases before specific triangle types.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/
select case
WHEN A + B <= C OR A + C <= B OR B + C <= A THEN 'Not A Triangle'
when A=B and B=C then 'Equilateral'
WHEN A = B OR B = C OR C = A THEN 'Isosceles'

else 
'Scalene'
end
from TRIANGLES
