#include<cstdio>
#include<cstring>
using namespace std;

#define maxn 10000
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int a[maxn];
        memset(a,0,sizeof(a));
        int j = 0;
        int o = 0;
        for(int i = 0;i < n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==1)
                j++;
            else
                o++;
        }
        if(o>j)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
