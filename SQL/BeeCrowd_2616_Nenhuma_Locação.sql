-- Made by: Fernando Schettini Github: https://github.com/FernandoSchett
-- Made by: Fernando Schettini Github: https://github.com/FernandoSchett
(SELECT c.id, c.name
FROM 
    customers c
EXCEPT
SELECT c.id, c.name
FROM
    customers c,locations l 
WHERE
    c.id = l.id_customers)
ORDER BY id;