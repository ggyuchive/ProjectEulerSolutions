# Author: Byeonggyu Park
# Created on 2025/02/14 21:57
# Answer: 171
year, month, day, date = 1900, 1, 1, 0
ans = 0
while year < 2001:
    if year > 1900 and date == 6 and day == 1:
        print(year, month, day, date)
        ans+=1
    date = (date+1)%7
    day+=1
    if day==31 and (month==4 or month==6 or month==9 or month==11):
        month+=1
        day=1
    elif day==32:
        month+=1
        day=1
        if month==13:
            year+=1
            month=1
    elif month==2 and (day==30 or (day==29 and not ((year%4==0 and year%100!=0) or year%400==0))):
        month+=1
        day=1
print(ans)