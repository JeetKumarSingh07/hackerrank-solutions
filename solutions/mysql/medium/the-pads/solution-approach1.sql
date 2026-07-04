-- ──────────────────────────────────────────────────
-- Problem     The PADS
-- Difficulty  Medium
-- Subdomain   Advanced Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-07-04, 11:44 a.m.
-- Technique   concat-group-aggregation
-- Time        O(N log N)
-- Space       O(N)
-- Trick       Use CONCAT with LEFT for string formatting and GROUP BY with aggregate functions to generate summary counts in a single query set.
-- Hint        Use LEFT(str, 1) for character extraction and LOWER for formatting.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/
SELECT CONCAT(Name, '(', LEFT(Occupation, 1), ')')
FROM OCCUPATIONS
ORDER BY Name;
SELECT CONCAT('There are a total of ', COUNT(*), ' ', LOWER(Occupation), 's.')
FROM OCCUPATIONS
GROUP BY Occupation
ORDER BY COUNT(*), Occupation;
