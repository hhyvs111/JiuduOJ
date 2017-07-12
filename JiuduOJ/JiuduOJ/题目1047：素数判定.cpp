#include<stdio.h>
#include<string.h>
#include<math.h>
#define maxn 100000+10
int judge(int n)
{
    int i;
    if(n <= 1)
        return 0;
    else
    {
        for(i = 2 ;i<=sqrt(n);i++)
        {
            if(n%i==0)
                return 0;
        }
        return 1;
    }
}
int main()
{
    int m;
    while(scanf("%d",&m)==1)
    {
        if(judge(m))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
