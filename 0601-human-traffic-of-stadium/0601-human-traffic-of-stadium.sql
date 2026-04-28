# Write your MySQL query stat
select distinct a.id,a.visit_date,a.people 
    from stadium a
    join stadium b
    join stadium c
    where a.people>=100 
    and b.people>=100 
    and c.people>=100
    and(
        (a.id=b.id-1 and b.id=c.id-1)
        or (a.id=b.id+1 and a.id=c.id-1)
        or (a.id=c.id+1 and c.id=b.id+1)
    )
    order by visit_date;