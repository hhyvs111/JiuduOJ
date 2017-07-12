#include<cstdio>
#include<algorithm>
#define maxn 10000+1
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n) == 1 && n)
    {
        int a[maxn];
        for(int i = 0;i < n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        if(n % 2)
        {
            printf("%d\n",a[n/2]);
        }
        else
        {
            printf("%d\n",(a[n/2]+ a[n/2-1])/2);
        }
    }
    return 0;
}
