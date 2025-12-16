-- 코드를 입력하세요
SELECT history_id
     , duration * daily_fee * (100 - discount_rate) / 100 AS fee
  FROM (SELECT ch.history_id
             , cc.daily_fee
             , (ch.end_date - start_date) + 1 duration
             ,NVL((SELECT MAX(discount_rate)
                  FROM car_rental_company_discount_plan cd
                 WHERE cd.car_type = cc.car_type
                   AND TO_NUMBER(REPLACE(cd.duration_type, '일 이상', '')) <= ((ch.end_date - start_date) + 1)), 0) AS discount_rate
          FROM car_rental_company_car cc
             , car_rental_company_rental_history ch
         WHERE cc.car_id = ch.car_id
           AND cc.car_type = '트럭')
 ORDER BY 2 DESC, 1 DESC
