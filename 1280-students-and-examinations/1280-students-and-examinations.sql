# Write your MySQL query statement below
select st.student_id , st.student_name,sb.subject_name,count(e.student_id) as attended_exams 
 from students as st CROSS JOIN subjects as sb left join examinations as e on st.student_id = e.student_id and sb.subject_name = e.subject_name 
 group by st.student_id, st.student_name, sb.subject_name order by st.student_id, st.student_name, sb.subject_name;