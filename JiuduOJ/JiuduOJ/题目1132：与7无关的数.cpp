#include<cstdio>
#include<cstring>

#define maxn 10000
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int ans = 0;
        for(int i = 1;i <= n;i++)
        {
            if(i%7==0)
                continue;
            int s = i;
            int flag = 0; // 数字里没有7的
            while(s)
            {
                if(s%10 == 7)
                    flag = 1;
                    s /=10;
            }
            if(flag)
                continue;
            ans += i*i;
        }
        printf("%d\n",ans);
    }
    return 0;
}
