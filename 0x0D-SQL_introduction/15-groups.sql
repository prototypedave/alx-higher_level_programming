-- groups records with the same score and lists them from second_table of the provided database of mysql server

SELECT score, COUNT(*) as number FROM second_table GROUP BY score ORDER BY number DESC;
