#include<stdio.h>
#include<string.h>
#define maxn 100000+10

int change(char a[])    //转换函数
{
    int m = 0;

        if(a[0]=='-')
        {
            int p = 1;

            for(int i =strlen(a)-1 ; i>=1 ; i--)
            {
                if(a[i] == ',')
                    continue;
                m += (a[i] - '0') * p;
//               printf("%d\n",m);    //p为十位数
                p *=10;
            }

            m = 0 - m;
        }
        else
        {
            int p = 1;
            for(int i = strlen(a)-1 ; i>=0 ; i--)
            {
                if(a[i] == ',')
                    continue;
                    m += (a[i] - '0') * p;  //p为十位数
//                    printf("%d\n",m);
                    p *=10;
            }
        }
        return m;
}
int main()
{
    char a[maxn];
    char b[maxn];
    while(scanf("%s %s",a,b)==2)
    {
        int m,n;
       m = change(a);
       n = change(b);
       printf("%d\n",m+n);
    }
    return 0;
}
