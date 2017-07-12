#include<cstdio>
#define maxn 105
using namespace std;


int main()
{
    int n;
    while(scanf("%d",&n) == 1)
    {
        int juzhen[n][n];
        for(int i = 0;i < n;i++)
            for(int j = 0;j < n;j++)
                scanf("%d",&juzhen[i][j]);
        int flag = 1;
        for(int i = 0;i < n;i++)
            for(int j = 0;j < n;j++)
                {
                    if(juzhen[i][j] != juzhen[j][i])
                    {
                        flag = 0;
                        break;
                    }
                }
        if(flag)
            printf("Yes!\n");
        else
            printf("No!\n");

    }
    return 0;
}
