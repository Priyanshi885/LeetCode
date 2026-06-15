# Write your MySQL query statement below
select id, count(id)as num 
from 
(select requester_id as id 
from RequestAccepted 
Union All
select accepter_id as id
from RequestAccepted) as temp
group by id
order by num desc
limit 1