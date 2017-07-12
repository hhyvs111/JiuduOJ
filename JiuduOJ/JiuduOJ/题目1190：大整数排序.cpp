#include<cstdio>
#include<cstring>
#include<algorithm>
#define maxn 1005
using namespace std;


struct bigshu
{
    char num[maxn];
    int len;
};


bool cmp(bigshu a,bigshu b)
{
    if(a.len == b.len)
        return strcmp(a.num,b.num) < 0;
    else
        return a.len < b.len;
}
int main()
{
    int n;
    int len[maxn];
    bigshu bg[maxn];
    while(scanf("%d",&n) == 1)
    {
        for(int i = 0;i < n;i++)
        {
            char s[maxn];
            scanf("%s",s);
             len[i] = strlen(s);
             bg[i].len = len[i];
            for(int j = 0;j < len[i];j++)
                {
                    bg[i].num[j] = s[j] ;
                }
        }
        sort(bg,bg+n,cmp);
//            for(int j = 0;j < n;j++)
//                for(int k = 0;k < n-j-1;k++)
//                {
//                    if(bg[k].num[i] > bg[k+1].num[i])
//                    {
//                        bigshu temp = bg[k];
//                        bg[k] = bg[k+1];
//                        bg[k+1] = temp;
//                    }
//                }
        for(int i = 0;i < n;i++)
        {
            printf("%s\n",bg[i].num);
        }
    }
    return 0;
}
