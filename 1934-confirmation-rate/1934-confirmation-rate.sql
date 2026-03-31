# Write your MySQL query statement below
select s.user_id, round(ifnull(
    (select count(*) from confirmations c where c.user_id = s.user_id and c.action = "confirmed") /
    (select count(*) from confirmations c where c.user_id = s.user_id),0
),2) as confirmation_rate from signups as s;