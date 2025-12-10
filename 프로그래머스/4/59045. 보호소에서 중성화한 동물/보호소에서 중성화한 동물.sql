-- 코드를 입력하세요
SELECT o.animal_id
     , o.animal_type
     , o.name
  FROM animal_outs o
     , animal_ins i
 WHERE i.animal_id = o.animal_id
   AND (o.sex_upon_outcome LIKE '%Spayed%'
        OR o.sex_upon_outcome LIKE '%Neutered%')
   AND i.sex_upon_intake NOT LIKE '%Spayed%'
   AND i.sex_upon_intake NOT LIKE '%Neutered%'
 ORDER BY o.animal_id
 