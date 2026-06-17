# Write your MySQL query statement below
select 
(select distinct salary
From Employee
Order by salary DESC
Limit 1  offset 1 ) as SecondHighestSalary;