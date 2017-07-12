#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
int month_day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int is_run(int year)
{
    if(year % 400 == 0)
        return 1;
    if( year%4 == 0 && year%100 !=0)
        return 1;
    return 0;
}

int days(int year,int month,int day)
{
        int ans = 0;
        for(int i=1;i<month;i++)
        {
            if(i == 2)
                if(is_run(year))
                {
                ans += 29;
                continue;
                }
            ans += month_day[i];
        }
        return ans;
}
int getDay(int a)
{
    int day = 0;
    day += a%100;
    return day;
}
int getMonth(int a)

{
    int month = 0;
    month += a/100 % 100;
    return month;
}
int getYear(int a)
{
    int month = 0;
    month += a/10000 % 10000;
    return month;
}
int main()
{
    int a,b;
    int year_a = 0 ,month_a = 0,day_a = 0;
    int year_b = 0,month_b = 0,day_b = 0;
    while(scanf("%d %d",&a,&b)==2)
    {
        day_a = getDay(a);
        month_a = getMonth(a);
        year_a = getYear(a);
        day_b = getDay(b);
        month_b = getMonth(b);
        year_b = getYear(b);
//        printf("%d %d %d\n",day_a,month_a,year_a);
        int day_1 = days(year_a,month_a,day_a) + day_a;
        int day_2 = days(year_b,month_b,day_b) + day_b;
//        printf("%d %d\n",day_1,day_2);
        if(year_a == year_b)
            {
                int ans = abs(day_1-day_2);
                printf("%d\n",ans+1);
            }
        else
        {
            if(year_a > year_b)
            {
                int ans = 0;
                for(int i = year_b;i < year_a;i++)
                {
                    if(is_run(i))
                        ans += 365;
                    else
                        ans += 364;
                }
                ans += abs(day_1-day_2);
                printf("%d\n",ans+1);
            }
            else
            {
                int ans = 0;
                for(int i = year_a;i < year_b;i++)
                {
                    if(is_run(i))
                        ans += 366;
                    else
                        ans += 365;
                }
                ans += abs(day_1-day_2);
                printf("%d\n",ans+1);
            }
        }
    }
    return 0;
}

