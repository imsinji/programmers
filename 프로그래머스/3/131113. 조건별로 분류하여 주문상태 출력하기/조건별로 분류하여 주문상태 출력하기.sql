-- 코드를 입력하세요
SELECT o.order_id
     , o.product_id
     , NVL2(o.out_date, TO_CHAR(o.out_date, 'YYYY-MM-DD'), '') AS out_date
     , CASE WHEN o.out_date < TO_DATE('2022-05-02', 'YYYY-MM-DD') THEN '출고완료'
            ELSE nvl2(o.out_date, '출고대기', '출고미정') END AS "출고여부"
  FROM food_order o
 ORDER BY o.order_id