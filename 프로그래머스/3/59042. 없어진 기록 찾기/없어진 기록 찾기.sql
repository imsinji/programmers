-- 코드를 입력하세요
SELECT o.animal_id
     , o.name
  FROM animal_outs o
 WHERE not exists (SELECT 'x' FROM animal_ins i WHERE i.animal_id = o.animal_id)
 ORDER BY o.animal_id