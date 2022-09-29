# Write your MySQL query statement below


select firstname, lastname, city, state from Person left outer join Address on Person.PersonId=Address.PersonId;