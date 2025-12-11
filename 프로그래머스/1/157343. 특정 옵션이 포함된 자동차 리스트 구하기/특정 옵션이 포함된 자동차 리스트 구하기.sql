-- 코드를 입력하세요
SELECT c.car_id
     , c.car_type
     , c.daily_fee
     , c.options
  FROM car_rental_company_car c
 WHERE c.options like '%네비게이션%'
 ORDER BY c.car_id DESC