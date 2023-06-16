-- -- Made by: Fernando Schettini Github: https://github.com/FernandoSchett

SELECT p.name, f.name
FROM 
    providers f , products p
WHERE
f.id = p.id_providers
AND
UPPER(f.name) = 'AJAX SA';