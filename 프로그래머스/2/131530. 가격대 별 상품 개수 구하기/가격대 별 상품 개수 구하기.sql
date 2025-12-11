-- 코드를 입력하세요
SELECT TRUNC(price, -4) AS price_group
     , COUNT(*) AS products
  FROM product p
 GROUP BY TRUNC(price, -4)
 ORDER BY 1