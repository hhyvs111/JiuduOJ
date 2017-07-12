#include<cstdio>
#include<cstring>
#define maxn 1000
#include<set>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n) == 1)
    {
        int a[maxn];
        set <int> dict;
        memset(a,0,sizeof(a));
        for(int i = 0;i < n;i++)
        {
            scanf("%d",&a[i]);
            dict.insert(a[i]);
        }
        int m;
        scanf("%d",&m);
        int b[maxn];
        memset(b,0,sizeof(b));
        for(int i = 0;i < m;i++)
        {
            scanf("%d",&b[i]);
            set<int>::iterator it;  //find µÄÓÃ·¨ iterator
            it = dict.find(b[i]);
            if(it!=dict.end())
                printf("YES\n");
            else
                printf("NO\n");
        }

    }
    return 0;
}
