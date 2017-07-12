#include<cstdio>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n > 0)
        {
            int ans=0;
            for(int i = n;i <= 2*n;i++)
                ans += i;
            printf("%d\n",ans);
        }
        else
        {
            int ans = 0;
            for(int i = n;i >= 2*n;i--)
                ans += i;
            printf("%d\n",ans);
        }

    }
    return 0;
}
