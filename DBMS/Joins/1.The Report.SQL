--  2 TABLES, ONE HAS NAME, MARKS AND ID OF STUDENTS AND OTHER HAS GRADE, MIN_MARKS AND MAX_MARKS(BASICALLY POINTER TABLE OF BTECH ,ARKING SYSTEM ) AND
--  YOU GOTTA RETURN STUDENTS NAME, GRADE AND MARKS IN DESCENDING ORDER OF GRADE AND  NAME

SELECT IF(GRADE<8, NULL, NAME), GRADE, MARKS
FROM STUDENTS JOIN GRADE
WHERE MARKS BETWEEN MIN_MARKS AND MAX_MARKS
ORDER BY GRADE DESC, NAME 