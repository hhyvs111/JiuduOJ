#include<cstdio>
#define maxn 1000


int is_run(int year)
{
    if(year % 400 == 0)
        return 1;
    if( year%4 == 0 && year%100 !=0)
        return 1;
    return 0;
}

using namespace std;
int main()
{
    int month_day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int year,month,day;
    while(scanf("%d%d%d",&year,&month,&day)==3)
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
//            printf("%d\n",ans);
        }
        printf("%d\n",ans+day);
    }
    return 0;
}
