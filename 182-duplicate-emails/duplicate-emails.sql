# Write your MySQL query statement below
select email as Email
From Person 
Group By email
Having Count(email)>1;