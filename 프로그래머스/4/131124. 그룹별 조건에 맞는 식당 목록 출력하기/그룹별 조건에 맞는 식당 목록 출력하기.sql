-- 코드를 입력하세요
SELECT mp.member_name
     , rr.review_text
     , TO_CHAR(rr.review_date, 'YYYY-MM-DD') AS review_date
  FROM member_profile mp
     , rest_review rr
     , (SELECT MAX(member_id) KEEP(DENSE_RANK FIRST ORDER BY review_count DESC) AS top_reviewer
          FROM (SELECT member_id, COUNT(*) AS review_count FROM rest_review GROUP BY member_id)) sub
 WHERE mp.member_id = rr.member_id
   AND mp.member_id = sub.top_reviewer
 ORDER BY rr.review_date, review_text
   