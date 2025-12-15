-- 코드를 입력하세요
SELECT hour
     , sum(count) AS count
  FROM (
SELECT rownum-1 AS hour
     , 0 AS count
  FROM dual
 CONNECT BY level <= 24
 UNION ALL
SELECT TO_NUMBER(TO_CHAR(datetime, 'HH24')) AS hour
     , 1 AS count
  FROM animal_outs) sub
 GROUP BY sub.hour
 ORDER BY sub.hour


