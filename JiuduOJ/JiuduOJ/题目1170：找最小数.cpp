#include<cstdio>
#include<cstring>
#define maxn 10000
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int a[maxn],b[maxn];
        int max ;
        for(int i = 0 ;i < n;i++)
        {
            scanf("%d %d",&a[i],&b[i]);
        }
        int min_a = a[0];
        int min_b = b[0];
        int ans;
        for(int i = 0;i < n;i++)
        {
           if(a[i] < min_a)
            {
                min_a = a[i];
                min_b = b[i];
                ans = i;
            }
           else if(a[i] == min_a)
           {
               if(b[i] < min_b )
               {
                   min_a = a[i];
                   min_b = b[i];
                   ans = i;
               }
           }
        }

    printf("%d %d\n",a[ans],b[ans]);
    }
    return 0;
}
