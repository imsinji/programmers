-- 코드를 입력하세요
SELECT a.author_id
     , a.author_name
     , b.category
     , SUM(b.price*bs.sales) AS total_sales
  FROM book b
     , author a
     , book_sales bs
 WHERE b.author_id = a.author_id
   AND bs.book_id = b.book_id
   AND TO_CHAR(bs.sales_date, 'YYYYMM') = '202201'
 GROUP BY a.author_id
     , a.author_name
     , b.category
 ORDER BY a.author_id, b.category DESC
   