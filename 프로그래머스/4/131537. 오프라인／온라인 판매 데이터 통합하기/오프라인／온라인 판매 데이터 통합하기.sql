-- 코드를 입력하세요
SELECT TO_CHAR(sub.sales_date, 'YYYY-MM-DD') AS sales_date
     , sub.product_id
     , sub.user_id
     , sub.sales_amount
  FROM (SELECT sales_date
             , product_id
             , user_id AS user_id
             , sales_amount
          FROM online_sale
         UNION ALL
        SELECT sales_date
             , product_id
             , NULL AS user_id
             , sales_amount
          FROM offline_sale) sub
 WHERE sales_date BETWEEN TO_DATE('2022-03-01', 'YYYY-MM-DD') AND TO_DATE('2022-03-31', 'YYYY-MM-DD')
 ORDER BY sub.sales_date
        , sub.product_id
        , sub.user_id