-- 코드를 입력하세요
SELECT cart_id
  FROM cart_products cp
 WHERE cp.NAME in ('Milk', 'Yogurt')
 GROUP BY cart_id
HAVING COUNT(DISTINCT name) > 1
ORDER BY cart_id