-- lists all cities of california that exists in the database of MySQL server

SELECT id, name FROM cities WHERE state_id = (SELECT id FROM states WHERE name = 'California') ORDER BY id;
