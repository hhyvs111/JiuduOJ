#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

bool cmp(int a,int b)
{
    return  a > b;
}

int main()
{
    int a[11];
    while(scanf("%d",&a[0])==1)
    {
        int jishu[11],oushu[11];
        int j = 0;
        int o = 0;
        if(a[0]%2 == 0 || a[0] == 0)   //对第一个字符做特殊处理
            {
                oushu[o] = a[0];
                o++;
            }
            else
            {
                jishu[j] = a[0];
                j++;
            }
        for(int i = 1;i < 10;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2 == 0 || a[i] == 0)
            {
                oushu[o] = a[i];
                o++;
            }
            else
            {
                jishu[j] = a[i];
                j++;
            }
        }
        sort(jishu,jishu+j,cmp);
        sort(oushu,oushu+o);
        //printf("%d %d\n",j,o);
        if( j > 0)
        {
            for(int i = 0;i < j-1;i++)
            printf("%d ",jishu[i]);
            if(j == 10)   //处理空格
                printf("%d\n",jishu[j-1]);
            else
                printf("%d ",jishu[j-1]);
        }
        if( o > 0)
        {
            for(int i = 0;i < o-1;i++)
                printf("%d ",oushu[i]);
            printf("%d\n",oushu[o-1]);
        }
        memset(jishu,0,sizeof(jishu));
        memset(oushu,0,sizeof(jishu));
    }
    return 0;
}
