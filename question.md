# MAKING OF POSTER
## PROBLEM STATEMENT
Welcome to the future‼‼

Now we have found **N** planets with life that have developed species that are evolved and organized.
 
Now we have decided to conduct some interplanet events for harmony between the planets.
But the problem is that each of the planets has different calendar system. 
The calendar in their planet has **M** months in a year, each with **D** days (no leap year, no difference in no of days)  and their week also has **W** days.


The date 1/1/1 was day - 1 of week (first week day  is represented as day 1) in their calendar. But they had started their calendar on  date **X/Y/Z**(dd-mm-yyyy format) according to earth calendar.

You are assigned to help the poster making team to convert the event date which we know according to earth calendar to date in each planet’s calendar and the corresponding days, so that the poster can be used in other planet.

For a given date **A/B/C**(dd-mm-yyyy format) in earth calendar on which our event is planned, you have to give the day in our planet, the date and day in each other planet.

## CONSTRAINTS:
* 1<= **N** <= 50
* 1 <= **M** <= 100
* 1 <= **D** <= 100
* 1 <= **W** <= 15
* 1 <= **C** <= 3000
* 1<= **Z** <= **C** 
* **X**,**Y**,**A**,**B** will be forming a meaningful date as **A/B/C** and **X/Y/Z**
## INPUT:
* The 1st line in the input contains number of planets.
* The 2nd line in input contains the date of event in earth-calendar.(**A/B/C**)
* The next n lines contain space seperated values of m, d, w and the day on which their calendar started according to earth-calendar. (1/1/1 in the planet’s date can be 25/04/2002 in our calendar)

{This date is in AD, do not consider BCE}
 
## OUTPUT:
* The 1st line of the output should have the day in earth calendar (in form of day 1, day 2, day 3 day 1 is Monday, day 2 is Tuesday and so on)
* The next **N** lines have date and day in the corresponding planets.

### Note :
 We(earth) follow Gregorian calendar in earth. 1/1/1 was Monday ie day-1, in this calendar leap years occur mostly every 4 years, but every 100 years we skip a leap year unless the year is divisible by 400.


## Sample input
```
1
28 4 2021
30 12 7 24 4 2021
```


## Sample output
```
day-3
5 1 1 day-5
```
 ## Explanation
* Here n=1 i.e. there is one planet other than earth.
* Date of event is 28/4/2021 which is Wednesday i.e day 3 of week.
* d=30 i.e. there are 30 days in each month, m=12 i.e. 12 months in each year and w=7 i.e. 7 days in each week of other planet’s calendar.
* And the calendar started on 24/04/2021. So 
    * 24/04/2021 is 1/1/1 and day 1 in their calendar
    * 25/04/2021 is 2/1/1 and day2 in their calendar
    * 26/04/2021 is 3/1/1 and day 3 in their calendar
    * 27/04/2021 is 4/1/1 and day 4 in their calendar
    * 28/04/2021 is 5/1/1 and day 5 in their calendar
* So output is  ```5 1 1 day-5```