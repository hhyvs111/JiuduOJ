#include<stdio.h>
#include<math.h>
#define maxn 10000

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {

    int cnt = 0,ans = 0;
    int a[maxn];
    for(int i = 1; i <= n;i++)
        {
            for(int j = i-1; j>=1 ; j--)
            if(i%j==0)
                cnt += j;
               // printf("%d ",cnt);
            if(cnt == i)
            {
                a[ans] = i;
                ans++;
            }
            cnt = 0;
        }
        for(int i = 0; i<ans;i++)   //´òÓ¡Êä³ö´ð°¸
        {
            printf("%d",a[i]);
            if(i==ans-1)
                printf("\n");
            else
                printf(" ");
        }
    }
    return 0;
}
