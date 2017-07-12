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
        int max = a[0];
        int min = a[0];
        int p=0,q=0;     //记录最大值最小值的数组下标
        for(int i = 0;i < n;i++)
        {
            if(a[i]>max)
               {
                    max = a[i];
                    p = i;
               }
            if(a[i]<min)
                {
                    min = a[i];
                    q = i;
                }
        }
        int temp;
        temp = a[q];
        a[q] = a[p];
        a[p] = temp;
        for(int i = 0;i < n;i++)
        {
            printf("%d",a[i]);
            if(i == n-1)
                printf("\n");
            else
                printf(" ");
        }
}
    return 0;
}
