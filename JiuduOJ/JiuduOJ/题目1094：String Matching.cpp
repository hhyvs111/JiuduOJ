#include<cstdio>
#include<cstring>
using namespace std;

#define maxn 10000
int main()
{
    char a[maxn],b[maxn];
    while(scanf("%s",a)!=EOF)
    {
        scanf("%s",b);
        int len_a = strlen(a);
        int len_b = strlen(b);
        int cnt = 0;
        int ans = 0;
        for(int i = 0;i < len_a;i++)
        {
            if(a[i] == b[0])
            {
                int p = i;
                for(int j = 0;j < len_b;j++)
                {
                    if(b[j] == a[p])
                    {
                        cnt ++;
                        p++;
                    }
                    else
                        break;
                }
                if(cnt == len_b)
                {
                    ans++;
                    cnt = 0;
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
