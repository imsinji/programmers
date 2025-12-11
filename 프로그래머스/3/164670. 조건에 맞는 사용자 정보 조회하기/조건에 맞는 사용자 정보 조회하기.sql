-- 코드를 입력하세요
SELECT u.user_id
     , u.nickname
     , u.city||' '||u.street_address1||' '||u.street_address2 AS "전체주소"
     , SUBSTR(u.tlno, 1, 3)||'-'||SUBSTR(u.tlno, 4, 4)||'-'||SUBSTR(u.tlno, 8, 4) AS "전화번호"
  FROM used_goods_board b
     , used_goods_user u
 WHERE b.writer_id = u.user_id
 GROUP BY u.user_id
        , u.nickname
        , u.city
        , u.street_address1
        , u.street_address2
        , u.tlno
HAVING COUNT(*) >= 3
ORDER BY u.user_id DESC