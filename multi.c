#include<stdio.h>
int main(){
    int n,date,month,year,week,no_of_days=0;
    scanf("%d",&n);
    scanf("%d/%d/%d",&date,&month,&year);
    //calclating no.of days from 1/1/1 to event date.
    no_of_days += (year-1)*365 + (year-1)/4 - (year-1)/100 + (year-1)/400;//no.of days in past years including leap years
    switch (month-1)//no.of days in past months of current year
    {
    case 11:
        no_of_days+= 30;// prev month dates of dec
    case 10:
        no_of_days+= 31;//nov
    case 9:
        no_of_days+= 30;//oct
    case 8:
        no_of_days+= 31;//sep
    case 7:
        no_of_days+= 31;//aug
    case 6:
        no_of_days+= 30;//july
    case 5:
        no_of_days+= 31;//june
    case 4:
        no_of_days+= 30;//may
    case 3:
        no_of_days+= 31;//apr
    case 2:
        if(((year%4)!=0)|| ((year%100)==0)&&((year%400)!=0)) no_of_days+=28;//march
        else no_of_days+= 29;
    case 1:
        no_of_days+= 31;//feb
    case 0:
        break;
    }
    no_of_days += date;//no.of days in present month
    int rem = (no_of_days)%7;
    if(rem==0) rem = 7;//sunday will be 7 not 0. so changing it.
    printf("%d\n",rem);//printing week number on event day of earth calendar.
    for (int i = 0; i < n; i++){
        int inweek,inmonth,inyear,date1,month1,year1,no_of_days1=0,diffdays;
        scanf("%d %d %d %d/%d/%d",&inyear,&inmonth,&inweek,&date1,&month1,&year1);
         //calclating no.of days from 1/1/1 to start date.
        no_of_days1 += (year1-1)*365 + (year1-1)/4 - (year1-1)/100 + (year1-1)/400;
        switch (month1-1)
        {
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
        no_of_days1 += date1;
        diffdays = no_of_days-no_of_days1;//days between begining day of other calendar and event day
        int nyear = diffdays/(inmonth*inyear);//year in planet's calendar
        int nmonth = (diffdays%(inyear*inmonth))/inmonth;//month 
        int ndate = diffdays%inmonth;//date
        int nweek = (diffdays+1)%inweek;//week
        if (nweek==0) nweek = inweek;//changing for 0 case
        printf("%d/%d/%d %d\n",ndate+1,nmonth+1,nyear+1,nweek);

    }
}
