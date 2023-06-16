-- Made by: Fernando Schettini Github: https://github.com/FernandoSchett
SELECT p.name, f.name, c.name
FROM
    categories c, providers f, products p
WHERE
    p.id_categories = c.id
    AND
    f.id = p.id_providers
    AND
    UPPER(f.name) = 'SANSUL SA'
    AND
    UPPER(c.name) = 'IMPORTED';
