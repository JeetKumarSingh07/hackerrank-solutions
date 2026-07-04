-- ──────────────────────────────────────────────────
-- Problem     Occupations
-- Difficulty  Medium
-- Subdomain   Advanced Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-07-04, 09:23 p.m.
-- Technique   pivot-row-number
-- Time        O(N log N)
-- Space       O(N)
-- Trick       Use ROW_NUMBER to create grouping keys and MAX with CASE to pivot categorical data into columns.
-- Hint        Use PARTITION BY to align names within each occupation group.
-- ──────────────────────────────────────────────────

SELECT
    MAX(CASE WHEN Occupation = 'Doctor' THEN Name END) AS Doctor,
    MAX(CASE WHEN Occupation = 'Professor' THEN Name END) AS Professor,
    MAX(CASE WHEN Occupation = 'Singer' THEN Name END) AS Singer,
    MAX(CASE WHEN Occupation = 'Actor' THEN Name END) AS Actor
FROM (
    SELECT
        Name,
        Occupation,
        ROW_NUMBER() OVER (PARTITION BY Occupation ORDER BY Name) AS rn
    FROM OCCUPATIONS
) t
GROUP BY rn
ORDER BY rn;
