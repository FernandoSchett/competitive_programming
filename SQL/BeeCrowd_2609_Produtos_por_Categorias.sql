-- Made by: Fernando Schettini Github: https://github.com/FernandoSchett
SELECT
    categories.name, SUM(products.amount) as SUM
FROM
    products
JOIN
    categories on (products.id_categories = categories.id)
GROUP BY
    categories.id