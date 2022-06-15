-- Made by: Fernando Schettini Github: https://github.com/FernandoSchett
SELECT m.id, m.name
FROM movies m, prices p
WHERE
p.value < 2.00
AND
m.id_prices = p.id;