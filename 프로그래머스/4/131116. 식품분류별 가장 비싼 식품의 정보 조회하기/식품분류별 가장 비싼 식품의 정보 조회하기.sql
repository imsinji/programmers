-- 코드를 입력하세요
SELECT fp.category
     , fp.price AS max_price
     , fp.product_name
  FROM food_product fp
 WHERE fp.product_id in (SELECT MAX(product_id) KEEP(DENSE_RANK FIRST ORDER BY PRICE DESC) AS expensive_product
                          FROM food_product
                         WHERE category in ('과자', '국', '김치', '식용유')
                         GROUP BY category)
 ORDER BY fp.price DESC