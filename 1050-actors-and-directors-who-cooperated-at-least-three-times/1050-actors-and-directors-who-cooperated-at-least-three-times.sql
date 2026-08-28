# Write your MySQL query statement below
Select actor_id , director_id from ActorDirector Group by actor_id,director_id having Count(actor_id=director_id) >=3.