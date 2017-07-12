#include<cstdio>
#include<cstring>
#define maxn 10000
using namespace std;

int main()
{
    char s[maxn];
    while(gets(s))
    {
        int ans[maxn];
        int num = 0;
        int cnt = 0;
        int len = strlen(s);
        int flag = 1;
        for(int i = 0 ;i < len;i++)
        {
            if(s[i]!=' ' && s[i] != '.')   //
                {
                    num++;
                    flag = 1;                   //È¥³ý¿Õ¸ñÉñÆ÷
                }
            else if(flag )
            {
                ans[cnt++] = num;
                num = 0;
                flag = 0;
            }
        }
        int j ;
        for(j = 0;j < cnt-1;j++)
            printf("%d ",ans[j]);
        printf("%d\n",ans[j]);
    }
    return 0;

}
