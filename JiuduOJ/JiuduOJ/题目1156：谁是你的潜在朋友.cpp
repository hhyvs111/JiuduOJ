#include<cstdio>

using namespace std;

int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m) == 2)
    {
        int a[201],b[201];
        for(int i = 0;i < 201;i++)
            b[i] = 0;
        for(int i = 0;i < n;i++)
        {
            scanf("%d",&a[i]);
            b[a[i]]++;
        }
        for(int i = 0;i < n;i++)
        {
            if(b[a[i]] > 1)
                printf("%d\n",b[a[i]]-1);
            else
                printf("BeiJu\n");
        }

    }
    return 0;
}
