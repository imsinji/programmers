-- 코드를 입력하세요
SELECT fp.product_id
     , fp.product_name
     , sum(fo.amount*fp.price) AS total_sales
  FROM food_product fp
     , food_order fo
 WHERE fp.product_id = fo.product_id
   AND TO_CHAR(fo.produce_date, 'YYYYMM') = '202205'
 GROUP BY fp.product_id
        , fp.product_name
 ORDER BY 3 DESC, 1
        