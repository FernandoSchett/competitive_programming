-- Made by: Fernando Schettini Github: https://github.com/FernandoSchett
SELECT m.id, m.name
FROM movies m, genres g
WHERE
m.id_genres = g.id
AND
g.description = 'Action'