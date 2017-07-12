#include<cstdio>
#include<cstring>
#define maxn 1000
using namespace std;
//TMD还以为要顺序出牌，日你妈
int main()
{
    char a[maxn];
    while(scanf("%s",&a) != EOF)
    {
        char b[maxn];
        int num[10];
        memset(num,0,sizeof(num));
        scanf("%s",b);
        int len_a = strlen(a),len_b = strlen(b);
//        printf("%d %d\n",len_a,len_b);
        int flag = 0;
        int ans = 0;
        for(int i = 0;i < len_a;i++)
            num[a[i] -'0']++;
        if(len_b < 5)
            for(int i = b[0] - '0' +1 ;i < 10;i++)
            {
                if(num[i] >= len_b)
                {
                    flag = 1;
                    break;
                }
            }
        else if(len_b == 5)
        {
           for(int i = b[0] - '0' + 1;i < 6;i++)
           {
               if(num[i] > 0 && num[i+1] > 0 && num[i+2] > 0 && num[i+3] && num[i+4]> 0)
                    flag = 1;
           }
           if(ans == len_b)
           {
               flag = 1;
               break;
           }
        }
        if(flag == 0)
            printf("NO\n");
        else
            printf("YES\n");

        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
    }
    return 0;
}
