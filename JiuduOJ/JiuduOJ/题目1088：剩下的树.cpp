#include<cstdio>
#include<cstring>
#define maxn 10000+10
using namespace std;

int main()
{
    int l,m;
    while(scanf("%d",&l)==1)
    {
        scanf("%d",&m);
        int tree[l+1],a,b;
        int ans = l;
        memset(tree,0,sizeof(tree));    //将数组清0代表有树
        for(int i = 0;i < m;i++)
        {
            scanf("%d %d",&a,&b);
            for(int j = a;j <= b;j++)
                tree[j] = 1;
        }
        for(int i = 0;i <= l;i++)
            if(tree[i])
                ans --;
        printf("%d\n",ans+1);

    }
    return 0;
}
