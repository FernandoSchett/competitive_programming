-- Made by: Fernando Schettini Github: https://github.com/FernandoSchett
SELECT
    customers.name, rentals.rentals_date
FROM
    customers
JOIN
    rentals ON (customers.id = rentals.id_customers)
WHERE
     rentals.rentals_date < '2016-10-01' AND rentals.rentals_date >= '2016-09-01'