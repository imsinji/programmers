-- 코드를 입력하세요
SELECT product_code
     , SUM(p.price * s.sales_amount) AS sales
  FROM product p
     , offline_sale s
 WHERE p.product_id = s.product_id
 GROUP BY product_code
 ORDER BY 2 desc, 1
 