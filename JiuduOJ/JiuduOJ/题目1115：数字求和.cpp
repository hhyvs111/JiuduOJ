#include<cstdio>
#define maxn 1000
using namespace std;

int main()
{
    int a;
    int num[10];
    while(scanf("%d",&a)==1)
    {
        int ans = 0;
        for(int i = 0;i < 5;i++)
        {
            scanf("%d",&num[i]);
            if(num[i] < a)
                ans += num[i];
        }
        printf("%d\n",ans);

    }
    return 0;
}
