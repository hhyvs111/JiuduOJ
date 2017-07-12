#include<cstdio>
#define maxn 1000
int main()
{
    int n;
    while(scanf("%d",&n) == 1 && n)
    {
        int score[n];
        for(int i = 0 ;i < n;i++)
            scanf("%d",&score[i]);
        int num;
        int cnt = 0;
        scanf("%d",&num);
        for(int i = 0;i < n;i++)
        {
            if(num == score[i])
                cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
