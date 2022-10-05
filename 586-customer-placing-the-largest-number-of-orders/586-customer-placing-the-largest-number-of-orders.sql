# Write your MySQL query statement below
select customer_number from orders Group By customer_number Order By count(customer_number)desc limit 1;
