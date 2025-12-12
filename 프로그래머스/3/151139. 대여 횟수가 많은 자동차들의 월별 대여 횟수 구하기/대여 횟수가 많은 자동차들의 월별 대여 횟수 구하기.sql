-- 코드를 입력하세요
WITH rec AS 
(
SELECT *
  FROM car_rental_company_rental_history
 WHERE start_date >= TO_DATE('2022-08-01','YYYY-MM-DD')
   AND start_date < TO_DATE('2022-11-01','YYYY-MM-DD')
)
SELECT TO_NUMBER(TO_CHAR(start_date, 'MM')) AS month
     , car_id
     , COUNT(*) AS records
  FROM rec
 WHERE car_id in (SELECT car_id
                    FROM rec
                   GROUP BY car_id
                  HAVING count(*) >= 5)
 GROUP BY car_id, TO_CHAR(start_date, 'MM')
 HAVING COUNT(*) <> 0
 ORDER BY TO_NUMBER(TO_CHAR(start_date, 'MM')), car_id DESC