-- 코드를 입력하세요
WITH
    target_users AS (
        SELECT *
          FROM user_info
         WHERE joined >= TO_DATE('2021-01-01', 'YYYY-MM-DD')
           AND joined < TO_DATE('2022-01-01', 'YYYY-MM-DD')
    )
SELECT TO_NUMBER(TO_CHAR(sales_date, 'YYYY')) AS year
     , TO_NUMBER(TO_CHAR(sales_date, 'MM')) AS month
     , COUNT(DISTINCT s.user_id) AS purchased_users
     , ROUND(COUNT(DISTINCT s.user_id) / (SELECT COUNT(*) FROM target_users), 1) AS puchased_ratio
  FROM online_sale s
 WHERE EXISTS (SELECT 'x'
                 FROM target_users t
                WHERE t.user_id = s.user_id)
 GROUP BY TO_CHAR(sales_date, 'YYYY')
        , TO_CHAR(sales_date, 'MM')
 ORDER BY 1, 2
 
 