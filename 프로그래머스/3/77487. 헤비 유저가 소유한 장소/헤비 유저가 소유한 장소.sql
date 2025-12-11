-- 코드를 입력하세요
SELECT *
  FROM places p
 WHERE p.host_id in (SELECT host_id
                      FROM places
                     GROUP BY host_id
                     HAVING COUNT(*) > 1)
 ORDER BY id