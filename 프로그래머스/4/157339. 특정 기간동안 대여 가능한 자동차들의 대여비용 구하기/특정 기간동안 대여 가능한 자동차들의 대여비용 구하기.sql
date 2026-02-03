SELECT *
  FROM (
SELECT cc.car_id
     , cc.car_type
     , ROUND(cc.daily_fee*30*(100-cd.discount_rate)/100) AS fee
  FROM car_rental_company_car cc
     , car_rental_company_discount_plan cd
 WHERE cc.car_type = cd.car_type
   AND cc.car_type in ('SUV', '세단')
   AND NOT EXISTS (SELECT 'x'
         FROM car_rental_company_rental_history crh
        WHERE crh.car_id = cc.car_id
          AND (crh.start_date <= TO_DATE('2022.11.30','YYYY.MM.DD')
            AND crh.end_date >= TO_DATE('2022.11.01','YYYY.MM.DD')))
  AND cd.duration_type = '30일 이상'
) t
 WHERE t.fee >= 500000
   AND t.fee < 2000000
 ORDER BY fee DESC, car_type, car_id DESC