-- 코드를 입력하세요
SELECT t.flavor
  FROM (SELECT sub.flavor, SUM(sub.total_order) AS total_order
          FROM (SELECT flavor, total_order
                  FROM first_half
                 UNION ALL
                SELECT flavor, total_order
                  FROM july) sub
         GROUP BY sub.flavor
         ORDER BY SUM(sub.total_order) DESC) t
 WHERE ROWNUM < 4