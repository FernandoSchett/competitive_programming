-- Made by: Fernando Schettini Github: https://github.com/FernandoSchett
SELECT c.name, o.id
FROM 
    customers c, orders o
WHERE
    c.id = o.id_customers
    AND
    o.orders_date  >= '2016-01-01'
    AND
    o.orders_date  <= '2016-06-30';