-- ──────────────────────────────────────────────────
-- Problem     Weather Observation Station 5
-- Difficulty  Easy
-- Subdomain   Basic Select
-- Platform    HackerRank
-- Language    mysql
-- Status      Accepted
-- Submitted   2026-06-28, 09:33 p.m.
-- Technique   union-limit-sort
-- Time        O(N log N)
-- Space       O(N)
-- Trick       Use UNION to combine two separate ORDER BY queries, each limiting to one result to capture the shortest and longest strings respectively.
-- Hint        LENGTH() handles string size; ORDER BY handles tie-breaking alphabetically.
-- ──────────────────────────────────────────────────

/*
Enter your query here.
*/
(
 SELECT CITY, LENGTH(CITY)
    FROM STATION
    ORDER BY LENGTH(CITY), CITY
    LIMIT 1
)
UNION
(
    SELECT CITY, LENGTH(CITY)
    FROM STATION
    ORDER BY LENGTH(CITY) DESC, CITY
    LIMIT 1
);
