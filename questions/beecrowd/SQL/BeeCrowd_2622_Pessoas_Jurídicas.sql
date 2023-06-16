-- Made by: Fernando Schettini Github: https://github.com/FernandoSchett
SELECT p.name
FROM 
    providers f, products p 
WHERE
    p.id_providers = f.id
    AND
    p.amount BETWEEN 10 AND 20
    AND
    f.name LIKE 'P%';