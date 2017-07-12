#include<cstdio>
#include<cstring>
#define maxn 10000
using namespace std;
int main()
{
    char a[maxn];
    int ans[maxn];
    while(scanf("%s",a)==1)
    {
        int len = strlen(a);
        memset(ans,0,sizeof(ans));
        for(int i = 0;i < len;i++)
        {
            int b = a[i] - 'A';
            ans[b]++;
        }
        for(int i = 0;i < 26;i++)
            printf("%c:%d\n",(i+'A'),ans[i]);
    }
    return 0;
}

