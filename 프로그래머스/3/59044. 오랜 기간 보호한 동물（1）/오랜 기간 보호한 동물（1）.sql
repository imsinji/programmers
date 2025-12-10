-- 코드를 입력하세요
SELECT name, datetime
  FROM (SELECT *
          FROM animal_ins i
         WHERE not exists (SELECT 'x'
                             FROM animal_outs o
                            WHERE o.animal_id = i.animal_id)
         ORDER BY datetime) subquery
 WHERE ROWNUM < 4