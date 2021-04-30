#include<stdio.h>
int main(){
    int n,date,month,year,week,no_of_days=0;
    scanf("%d",&n);
    scanf("%d/%d/%d",&date,&month,&year);
    //calclating no.of days from 1/1/1 to event date.
    no_of_days += (year-1)*365 + (year-1)/4 - (year-1)/100 + (year-1)/400;//no.of days in past years including leap years
    switch (month-1){//no.of days in past months of current year.Notice that this switch cases have no break for each case.
    case 11://Notice that this switch cases have no break for each case.so that all prev.moths days can be added
        no_of_days+= 30;// prev month dates of dec
    case 10:
        no_of_days+= 31;//prev month dates for nov
    case 9:
        no_of_days+= 30;//prev month dates foroct
    case 8:
        no_of_days+= 31;//prev month dates for sep
    case 7:
        no_of_days+= 31;//prev month dates for aug
    case 6:
        no_of_days+= 30;//prev month dates for july
    case 5:
        no_of_days+= 31;//prev month dates for june
    case 4:
        no_of_days+= 30;//prev month dates for may
    case 3:
        no_of_days+= 31;//prev month dates for apr
    case 2:
        if(((year%4)!=0)|| ((year%100)==0)&&((year%400)!=0)) no_of_days+=28;//prev month dates for march
        else no_of_days+= 29;
    case 1:
        no_of_days+= 31;//prev month dates for feb
    case 0:
        break;
    }
    no_of_days += date;//Adding no.of days in present month.now this value is total no.of days from 1/1/1.
    int rem = (no_of_days)%7;
    if(rem==0) rem = 7;//sunday will be 7 not 0. so changing it.
    printf("day-%d\n",rem);//printing week number on event day of earth calendar.
    for (int i = 0; i < n; i++){
        int inweek,inmonth,inyear,date1,month1,year1,no_of_days1=0,diffdays;
        scanf("%d %d %d %d/%d/%d",&inmonth,&inyear,&inweek,&date1,&month1,&year1);
         //calclating no.of days from 1/1/1 to start date.same code used again with variables changed. 
        no_of_days1 += (year1-1)*365 + (year1-1)/4 - (year1-1)/100 + (year1-1)/400;
        switch (month1-1){
        case 11:
            no_of_days1+= 30;
        case 10:
            no_of_days1+= 31;
        case 9:
            no_of_days1+= 30;
        case 8:
            no_of_days1+= 31;
        case 7:
            no_of_days1+= 31;
        case 6:
            no_of_days1+= 30;
        case 5:
            no_of_days1+= 31;
        case 4:
            no_of_days1+= 30;
        case 3:
            no_of_days1+= 31;
        case 2:
            if(((year%4)!=0)|| ((year%100)==0)&&((year%400)!=0)) no_of_days1+=28;
            else no_of_days1+= 29;
        case 1:
            no_of_days1+= 31;
        case 0:
            break;
        }
        no_of_days1 += date1;//this value is total no.of days from 1/1/1.
        diffdays = no_of_days-no_of_days1;//days between begining day of other calendar and event day
        int nyear = diffdays/(inmonth*inyear);//year in planet's calendar with -1.
        int nmonth = (diffdays%(inyear*inmonth))/inmonth;//month-1 
        int ndate = diffdays%inmonth;//date-1
        int nweek = (diffdays+1)%inweek;//week
        if (nweek==0) nweek = inweek;//changing for 0 case
        printf("%d/%d/%d %d\n",ndate+1,nmonth+1,nyear+1,nweek);
    }
    return 0;
}
/*
test cases we used to judge :
1====testing for partially solved.(N=0)
INPUT:
0
30/04/2021
EXPECTED OUTPUT:
day-5
INPUT:
0
31/12/2999
EXPECTED OUTPUT:
day-2
======================================================
INPUT:
3
31/12/2999
1 1 1 1/1/1
99 99 14 1/1/1
30 12 14 28/04/2021
OUTPUT:
day-2
1/1/1095362 Day-1
26/76/112 Day-2
5/12/993 day-7
=======================================================
INPUT:
8
1/9/2201
4 2 3 1/9/2201
4 2 3 31/8/2201
4 2 3 30/8/2201
4 2 3 29/8/2201
4 2 3 28/8/2201
4 2 3 27/8/2201
4 2 3 26/8/2201
4 2 3 25/8/2201
OUTPUT:
day-3
1/1/1 day-1
2/1/1 day-2
3/1/1 day-3
4/1/1 day-1
1/2/1 day-2
2/2/1 day-3
3/2/1 day-1
4/2/1 day-2
*/