# Write your MySQL query statement below
select department, employee, salary 
from
(select d.name as Department, 
e.name as Employee,
e.salary as salary,
dense_rank() over (partition by d.name order by e.salary desc) as ranks
from Employee as e
left join Department as d
on e.departmentId = d.id) as temp
where ranks <=3