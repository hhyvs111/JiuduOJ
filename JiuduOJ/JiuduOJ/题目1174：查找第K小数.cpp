#include<cstdio>
#include<cstring>
#include<algorithm>
#define maxn 10000
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n) == 1)
    {
        int a[maxn];
        memset(a,0,sizeof(a));
        for(int i = 0;i < n;i++)
        {
            scanf("%d",&a[i]);
        }
        int num;
        sort(a,a+n);
//        for(int i = 0;i < n;i++)
//            printf("%d ",a[i]);
//        printf("\n");
        for(int i = 0;i < n;i++)   // ШЅжи
        {
            if(a[i] == a[i+1])
            {
                for(int j = i;j < n;j++)
                    a[j] = a[j+1];
                    n--;
                    i--;
            }
        }
//        printf("%d\n",n);
//        for(int i = 0;i < n;i++)
//            printf("%d ",a[i]);
//        printf("\n");
        scanf("%d",&num);
        printf("%d\n",a[num-1]);
    }
    return 0;
}
