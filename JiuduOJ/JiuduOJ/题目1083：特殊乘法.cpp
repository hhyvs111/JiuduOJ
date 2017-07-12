#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char a[100],b[100];
    while(scanf("%s %s",a,b)==2)
    {
        int ans = 0;
        int m,n;
        for(int i =0;i<strlen(a);i++)
        {
            for(int j = 0;j<strlen(b);j++)
            {
                m = a[i] - '0';

                n = b[j] - '0';
//                printf("%d %d\n",m,n);
                ans += m*n;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
