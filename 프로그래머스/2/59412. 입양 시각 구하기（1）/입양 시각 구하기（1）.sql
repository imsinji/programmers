-- 코드를 입력하세요
SELECT TO_NUMBER(TO_CHAR(datetime, 'HH24')) AS hour
     , COUNT(*) AS count
  FROM animal_outs
 GROUP BY TO_NUMBER(TO_CHAR(datetime, 'HH24'))
 HAVING TO_NUMBER(TO_CHAR(datetime, 'HH24')) BETWEEN 9 AND 19
 ORDER BY 1