#include<cstdio>
using namespace std;

int month[13]  = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int is_run(int year)
{
    if((year%4 == 0 && year%100 != 0) || year%400 == 0)
        return 1;
    return 0;
}
int main()
{
    int year,day;
    while(scanf("%d %d",&year,&day) == 2)
    {
        if(is_run(year))
            month[2] = 29;
        else
            month[2] = 28;
        if(day == 366 && !is_run(year))
        {
            printf("%04d-01-01\n",year);
            continue;
        }
        printf("%04d-",year);
        int m = 1;
        int i = 1;
        while(day > month[i])
        {
            day = day - month[i];
            i++;
            m++;
        }
        printf("%02d-%02d\n",m,day);

    }
    return 0;
}
