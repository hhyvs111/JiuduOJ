#include<cstdio>
#include<string>
using namespace std;
#define maxn 1000
int main()
{
    int n,m;
    char str1[maxn][maxn],str2[maxn][maxn];
    while(scanf("%d",&n)==1)
    {
        for(int i = 0 ; i < n;i++)
            scanf("%s",str1[i]);
        scanf("%d",&m);
        for(int i = 0 ; i < m;i++)
            scanf("%s",str2[i]);
        int ans;
        int j = 0;
        for(int i = 0;i < m;i++)
        {
            if(strcmp(str1[j],str[i]))    //如果代理服务器相同
                {
                    j++;
                    i--;
                }
        }
//        for(int i = 0 ; i < n;i++)
//            printf("%s\n",str1[i]);
    }
    return 0;
}
