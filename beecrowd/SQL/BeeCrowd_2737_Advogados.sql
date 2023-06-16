-- Made by: Fernando Schettini Github: https://github.com/FernandoSchett
SELECT 
    l.name, l.customers_number
FROM 
    Lawyers l
WHERE
    l.customers_number = (  
        SELECT 
            MAX(customers_number)
        FROM 
            lawyers 
    )

UNION ALL

SELECT 
    l.name, l.customers_number
FROM 
    Lawyers l
WHERE
    l.customers_number = (
        SELECT  
            MIN(customers_number)
        FROM 
            lawyers 
    )

UNION ALL

SELECT 
    'Average' AS name, CAST(AVG(customers_number) AS int) as customers_number
FROM 
    Lawyers;
