-- 코드를 입력하세요
SELECT i.animal_id
     , i.name
     , i.sex_upon_intake
  FROM animal_ins i
 WHERE i.name in ('Lucy', 'Ella', 'Pickle', 'Rogan', 'Sabrina', 'Mitty')
 ORDER BY i.animal_id