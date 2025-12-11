-- 코드를 입력하세요
SELECT TO_NUMBER(TO_CHAR(os.sales_date, 'YYYY')) AS year
     , TO_NUMBER(TO_CHAR(os.sales_date, 'MM')) AS month
     , ui.gender
     , COUNT(DISTINCT ui.user_id) AS users
  FROM user_info ui
     , online_sale os
 WHERE ui.user_id = os.user_id
   AND ui.gender IS NOT NULL
 GROUP BY TO_CHAR(os.sales_date, 'YYYY')
     , TO_CHAR(os.sales_date, 'MM')
     , ui.gender
 ORDER BY 1, 2, 3
 