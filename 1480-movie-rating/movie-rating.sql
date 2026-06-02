# Write your MySQL query statement below
(select u.name as results
from Users as u
left join MovieRating as mr
on u.user_id = mr.user_id
group by u.user_id
order by count(mr.user_id) desc, u.name
limit 1)
UNION ALL
(select m.title as results
from movies as m
left join MovieRating as mr
on m.movie_id = mr.movie_id
where created_at between '2020-02-1' and '2020-02-29'
group by m.movie_id
order by avg(mr.rating) desc, m.title
limit 1)