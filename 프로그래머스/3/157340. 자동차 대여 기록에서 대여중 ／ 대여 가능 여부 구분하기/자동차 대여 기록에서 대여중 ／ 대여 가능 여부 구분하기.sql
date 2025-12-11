-- 코드를 입력하세요
SELECT car_id
     , DECODE(MAX(CASE WHEN TO_DATE('2022-10-16', 'YYYY-MM-DD') between start_date AND end_date THEN 1
        ELSE 0 END), 1, '대여중', '대여 가능') AS availability
  FROM car_rental_company_rental_history
 GROUP BY car_id
 ORDER BY car_id DESC