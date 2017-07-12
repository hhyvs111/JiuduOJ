#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int a[1001];
        for(int i = 0;i < n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        int i;
        for( i = 0;i < n-1;i++)
            printf("%d ",a[i]);
        printf("%d\n",a[i]);

    }
    return 0;
}
