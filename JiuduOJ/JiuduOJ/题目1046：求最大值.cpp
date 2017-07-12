#include<stdio.h>
int main()
{
    int a[100];
    while(scanf("%d %d %d %d %d %d %d %d %d %d ",
                &a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&a[10])==10)
    {
        int max = a[1];
        for(int i=2;i<=10;i++)
            if(a[i]>max)
             max = a[i];
        printf("max=%d\n",max);
    }
    return 0;
}
