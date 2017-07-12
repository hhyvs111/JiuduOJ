#include<cstdio>
#define maxn 100
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n) == 1)
    {
        int i,j,a[n][n];
        for(j = 0;j < n;j++)
            for(i = 0;i < n;i++)
                scanf("%d",&a[i][j]);
        for(i = 0;i < n;i++)
        {
            for(j = 0;j < n-1;j++)
                printf("%d ",a[i][j]);
            printf("%d\n",a[i][j]);
        }
    }
    return 0;
}
