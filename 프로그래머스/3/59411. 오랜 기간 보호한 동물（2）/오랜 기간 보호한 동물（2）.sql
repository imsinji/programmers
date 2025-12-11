-- 코드를 입력하세요
SELECT sub.animal_id
     , sub.name
  FROM (SELECT i.*, (o.datetime - i.datetime) AS duration
          FROM animal_ins i
             , animal_outs o
         WHERE i.animal_id = o.animal_id
         ORDER BY (o.datetime - i.datetime) DESC) sub
 WHERE ROWNUM <= 2
   