-- 코드를 입력하세요
SELECT h.car_id
     , TO_CHAR(ROUND(AVG(h.end_date - h.start_date + 1),1), 'fm9999.0') AS average_duration
  FROM car_rental_company_rental_history h
 GROUP BY h.car_id
HAVING AVG(h.end_date - h.start_date + 1) >= 7
 ORDER BY ROUND(AVG(h.end_date - h.start_date + 1),1) DESC, 1 DESC