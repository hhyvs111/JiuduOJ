#include<cstdio>
#include<algorithm>
#include<set>
#define maxn 10000
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n) == 1)
    {
        int a[maxn];
        for(int i = 0 ; i < n;i++)
        {
            scanf("%d",&a[i]);
        }
        if(n == 1)
        {
            printf("%d\n",a[0]);
            printf("-1\n");
            continue;
        }
        sort(a,a+n);
        int max = a[n-1];
        printf("%d\n",max);
        for(int i = 0;i < n-2;i++)
            printf("%d ",a[i]);
        printf("%d\n",a[n-2]);
    }
    return 0;
}
