-- 코드를 입력하세요
SELECT i.animal_id
     , i.name
  FROM animal_ins i
 WHERE exists (SELECT 'x'
                 FROM animal_outs o
                WHERE o.animal_id = i.animal_id
                  AND o.datetime < i.datetime)
 ORDER BY i.datetime
                  