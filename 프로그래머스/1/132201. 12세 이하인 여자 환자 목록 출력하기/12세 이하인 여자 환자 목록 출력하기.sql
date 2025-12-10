-- 코드를 입력하세요
SELECT PT_NAME, PT_NO, GEND_CD, AGE
     , NVL(tlno, 'NONE') AS TLNO
  FROM patient
 WHERE age <= 12
   AND GEND_CD = 'W'
 ORDER BY age desc, pt_name