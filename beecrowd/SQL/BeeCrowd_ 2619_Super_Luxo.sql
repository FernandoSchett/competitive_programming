-- Made by: Fernando Schettini Github: https://github.com/FernandoSchett
SELECT p.name, f.name, p.price
FROM products p, providers f, categories c
WHERE
    p.id_categories = c.id
    AND
    f.id = p.id_providers
    AND
    UPPER(c.name) = 'SUPER LUXURY'
    AND
    p.price > 1000;