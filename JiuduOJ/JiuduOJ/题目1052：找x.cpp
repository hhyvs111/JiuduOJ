#include<stdio.h>
#define maxn 10000
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int a[maxn],x;
        for(int i = 0;i < n;i++)
        {
            scanf("%d",&a[i]);
        }
         scanf("%d",&x);
        for(int i = 0 ; i < n;i++)
            if(a[i] == x)
                {
                    printf("%d\n",i);
                    break;
                }
            else if(i == n-1)
                printf("-1\n");
    }
    return 0;
}
