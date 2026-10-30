# Write your MySQL query statement below
select request_at as Day,
Round(sum(case when status='cancelled_by_driver' or status='cancelled_by_client' then 1 else 0 end)/count(request_at),2)
AS "Cancellation Rate"
from trips t
join users c
on t.client_id = c.users_id
and c.banned='No'
join users u 
on t.driver_id = u.users_id
and u.banned='No'
where request_at between '2013-10-01' and '2013-10-03'
group by request_at
