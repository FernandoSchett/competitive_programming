-- Made by: Fernando Schettini Github: https://github.com/FernandoSchett
SELECT replace(to_char(natural_person.cpf::bigint,'000:000:000-00'),':','.') as CPF from natural_person ;
FROM  natural_person n;
--ta errado