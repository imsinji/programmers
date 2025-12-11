-- 코드를 입력하세요
SELECT ri.food_type
     , ri.rest_id
     , ri.rest_name
     , ri.favorites
  FROM rest_info ri
 WHERE ri.rest_id in (SELECT MAX(rest_id) KEEP(DENSE_RANK FIRST ORDER BY favorites DESC) f_rest
          FROM rest_info
         GROUP BY food_type)
 ORDER BY food_type DESC