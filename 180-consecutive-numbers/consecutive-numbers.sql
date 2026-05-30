# Write your MySQL query statement below
select l1.num as ConsecutiveNums
from logs as l1
join logs as l2
on l1.id - 1 = l2.id
join logs as l3
on l2.id - 1 = l3.id
where l1.num = l2.num
and l2.num = l3.num
group by l1.num
