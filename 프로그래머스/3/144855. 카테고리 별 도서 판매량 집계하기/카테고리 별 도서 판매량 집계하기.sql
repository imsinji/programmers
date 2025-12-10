-- 코드를 입력하세요
SELECT b.category
     , SUM(s.sales) AS total_sales
  FROM book b
     , book_sales s
 WHERE b.book_id = s.book_id
   AND s.sales_date >= TO_DATE('2022-01-01', 'YYYY-MM-DD')
   AND s.sales_date < TO_DATE('2022-02-01', 'YYYY-MM-DD')
 GROUP BY b.category
 ORDER BY 1