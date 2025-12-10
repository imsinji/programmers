-- 코드를 입력하세요
SELECT DISTINCT c.car_id AS car_id
  FROM car_rental_company_car c
 WHERE c.car_type = '세단'
   AND EXISTS (SELECT 'x'
                 FROM car_rental_company_rental_history h
                WHERE h.car_id = c.car_id
                  AND TO_CHAR(h.start_date, 'MM') = '10')
 ORDER BY 1 DESC