
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int a[10050];
int main()
{
    memset(a,0,sizeof(a));
    int i,j;
    int cnt=0;
    for(i = 2;i <= 12000;i++)
    {
        for(j = 2;j <= i;j++)
        {
            if(i%j==0 && j!=i)   //大的磨小的
                break;
        }
        if(j-1 == i && i%10 == 1)
          {
            a[cnt] = i;
            cnt++;
//             printf("%d\n",i);
          }

    }
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n <= 10)
        {
            printf("-1\n");
            continue;
        }
        int k;
        for( k = 0;k < n;k++)
        {
            if(a[k] < n && a[k+1] < n && a[k] != 0)
                printf("%d ",a[k]);
             if(a[k] > n)
                break;
        }
        if(a[k-1] == n)
            printf("%d\n",a[k-2]);    //处理边界问题，括号
        else

        printf("%d\n",a[k-1]);
    }
    return 0;
}
