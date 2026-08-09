# Write your MySQL query statement below
select l.book_id, l.title,l.author,l.genre,l.publication_year,l.total_copies AS current_borrowers
from library_books as l  join 
borrowing_records as b
using (book_id)
where b.return_date is null
group by l.book_id
having count(*)=l.total_copies
order by current_borrowers desc,l.title;