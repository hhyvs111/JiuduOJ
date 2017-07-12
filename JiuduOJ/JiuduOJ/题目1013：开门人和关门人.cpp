#include<cstdio>
#include<cstring>
#include<algorithm>
#define maxn 1000
using namespace std;
struct daka
{
    char id[maxn];
    char in[9];
    char out[9];
};
bool cmp1(daka a,daka b)
{
    int hour_a,min_a,sec_a;
    int hour_b,min_b,sec_b;
    hour_a = (a.in[0] -'0') * 10 + a.in[1] - '0';
    min_a = (a.in[3] -'0') * 10 + a.in[4] - '0';
    hour_a = (a.in[6] -'0') * 10 + a.in[7] - '0';
    hour_b = (b.in[0] -'0') * 10 + b.in[1] - '0';
    min_b = (b.in[3] -'0') * 10 + b.in[4] - '0';
    hour_b = (b.in[6] -'0') * 10 + b.in[7] - '0';
    if(hour_a == hour_b)
        {
            if(min_a == min_b)
                return sec_a < sec_b;
            else
                return min_a < min_b;
        }
    else
        return hour_a < hour_b;
}

bool cmp2(daka a,daka b)
{
    int hour_a,min_a,sec_a;
    int hour_b,min_b,sec_b;
    hour_a = (a.out[0] -'0') * 10 + a.out[1] - '0';
    min_a = (a.out[3] -'0') * 10 + a.out[4] - '0';
    hour_a = (a.out[6] -'0') * 10 + a.out[7] - '0';
    hour_b = (b.out[0] -'0') * 10 + b.out[1] - '0';
    min_b = (b.out[3] -'0') * 10 + b.out[4] - '0';
    hour_b = (b.out[6] -'0') * 10 + b.out[7] - '0';
    if(hour_a == hour_b)
        {
            if(min_a == min_b)
                return sec_a > sec_b;
            else
                return min_a > min_b;
        }
    else
        return hour_a > hour_b;
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            int m;
            scanf("%d",&m);
            daka re[m];
            for(int i = 0;i < m;i++)
                scanf("%s %s %s",re[i].id,re[i].in,re[i].out);
            sort(re,re+m,cmp1);
//            for(int i = 0;i < m;i++)
//                printf("%s %s %s\n",re[i].id,re[i].in,re[i].out);
            printf("%s ",re[0].id);

            sort(re,re+m,cmp2);
//            for(int i = 0;i < m;i++)
//                printf("%s %s %s\n",re[i].id,re[i].in,re[i].out);
            printf("%s\n",re[0].id);
        }
    }
    return 0;
}
