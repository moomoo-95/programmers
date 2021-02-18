-- REGEXP '' 정규표현식
-- LEFT,MID,RIGHT(str, 3) 부분문자열 CONCAT(, , ,) 문자열 결합

-- Revising the Select Query I
SELECT * FROM CITY WHERE POPULATION > 100000 AND COUNTRYCODE = "USA";

-- Revising the Select Query II
SELECT NAME FROM CITY WHERE COUNTRYCODE = 'USA' AND POPULATION > 120000;

-- Select All
ELECT * FROM CITY;

-- Select By ID
SELECT * FROM CITY WHERE ID = 1661;

-- Japanese Cities' Attributes
SELECT * FROM CITY WHERE COUNTRYCODE = "JPN";

-- Japanese Cities' Names
SELECT NAME FROM CITY WHERE COUNTRYCODE = "JPN";

-- Weather Observation Station 1
SELECT CITY, STATE FROM STATION;

-- Weather Observation Station 3
SELECT DISTINCT CITY FROM STATION WHERE MOD(ID, 2) = 0;

-- Weather Observation Station 4
SELECT COUNT(*) - COUNT(DISTINCT CITY) FROM STATION;

-- Weather Observation Station 5
SELECT CITY, LENGTH(CITY) FROM STATION ORDER BY LENGTH(CITY), CITY LIMIT 1;
SELECT CITY, LENGTH(CITY) FROM STATION ORDER BY LENGTH(CITY) DESC, CITY LIMIT 1;

-- Weather Observation Station 6
SELECT DISTINCT CITY FROM STATION WHERE CITY REGEXP '^[aeiou]';

-- Weather Observation Station 7
SELECT DISTINCT CITY FROM STATION WHERE CITY REGEXP '[aeiou]$'; 

-- Weather Observation Station 8
SELECT DISTINCT CITY FROM STATION WHERE CITY REGEXP '^[aeiou].*[aeiou]$';

-- Weather Observation Station 9
SELECT DISTINCT CITY FROM STATION WHERE CITY REGEXP('^[^aeiou]');

-- Weather Observation Station 10
SELECT DISTINCT CITY FROM STATION WHERE CITY REGEXP('[^aeiou]$');

-- Weather Observation Station 11
SELECT DISTINCT CITY FROM STATION WHERE CITY REGEXP('^[^aeiou]|[^aeiou]$');

-- Weather Observation Station 12
SELECT DISTINCT CITY FROM STATION WHERE CITY REGEXP '^[^aeiou].*[^aeiou]$';

-- Higher Than 75 Marks
SELECT Name FROM STUDENTS WHERE Marks > 75 ORDER BY RIGHT(Name, 3), ID;

-- Employee Names
SELECT name FROM Employee ORDER BY name;

-- Type of Triangle
SELECT CASE WHEN A + B <= C OR A + C <= B OR B + C <= A THEN 'Not A Triangle'
            WHEN (A = B) AND (B = C) THEN 'Equilateral'
            WHEN (A = B) OR (B = C) OR (A = C) THEN 'Isosceles'
            ELSE 'Scalene'
        END
        FROM TRIANGLES;
        
-- The PADS
SELECT CONCAT(Name,'(', LEFT(Occupation, 1), ')')
    FROM OCCUPATIONS ORDER BY Name, Occupation;
SELECT CONCAT('There are a total of ', COUNT(Occupation), ' ', LOWER(Occupation), 's.')
    FROM OCCUPATIONS GROUP BY Occupation ORDER BY COUNT(Occupation), Occupation;
