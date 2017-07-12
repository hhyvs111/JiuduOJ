#include<cstdio>
#include<cstring>
#include<algorithm>
#define maxn 1000
using namespace std;

int main()
{
    char str[maxn];
    while(~scanf("%s",str))
    {
        int b[maxn];
        memset(b,0,sizeof(b));
        int len = strlen(str);  //0 ÊÇ48 A 65 Z 90 a 97 z 122
        int visit[maxn];
        memset(visit,0,sizeof(visit));
        for(int i = 0 ;i < len;i++)
        {
            b[(int) str[i]]++;
        }
        for(int i = 0;i < len;i++)
        {
            int cnt = b[(int)str[i]];
            if(cnt > 1 && visit[i] == 0)
            {
                for(int j = i;j < len;j++)
                    {
                        if(str[j] == str[i])
                            {
                                printf("%c:%d",str[j],j);
                                visit[j] = 1;
                                cnt--;
                                if(cnt > 0)
                                    printf(",");
                                else
                                {
                                    printf("\n");
                                    break;
                                }
                            }

                    }
            }
        }
    }
    return 0;
}
