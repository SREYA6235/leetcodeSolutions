# Write your MySQL query statement below
select
 p.lastname ,
 p.firstname ,
 a.city,a.state 
 from Person p 
   left join Address a 
     on p.personId=a.personId;