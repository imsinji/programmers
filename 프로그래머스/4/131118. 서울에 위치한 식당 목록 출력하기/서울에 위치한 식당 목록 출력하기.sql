-- 코드를 입력하세요
SELECT ri.rest_id
     , ri.rest_name
     , ri.food_type
     , ri.favorites
     , ri.address
     , ROUND(AVG(rr.review_score), 2) AS score
  FROM rest_info ri
     , rest_review rr
 WHERE ri.rest_id = rr.rest_id
   AND ri.address LIKE '서울%'
 GROUP BY ri.rest_id
     , ri.rest_name
     , ri.food_type
     , ri.favorites
     , ri.address
 ORDER BY ROUND(AVG(rr.review_score), 2) DESC, ri.favorites DESC