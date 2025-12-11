-- 코드를 입력하세요
SELECT a.apnt_no
     , p.pt_name
     , p.pt_no
     , d.mcdp_cd
     , d.dr_name
     , a.apnt_ymd
  FROM patient p
     , doctor d
     , appointment a
 WHERE a.pt_no = p.pt_no
   AND a.mddr_id = d.dr_id
   AND a.apnt_cncl_yn <> 'Y'
   AND d.mcdp_cd = 'CS'
   AND a.apnt_ymd >= TO_DATE('2022-04-13', 'YYYY-MM-DD')
   AND a.apnt_ymd < TO_DATE('2022-04-14', 'YYYY-MM-DD')
 ORDER BY a.apnt_ymd