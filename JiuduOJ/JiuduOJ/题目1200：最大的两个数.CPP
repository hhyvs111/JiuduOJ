#include<cstdio>
#define maxn 100
using namespace std;
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            int mar[4][5];
            for(int i = 0;i < 4;i++)
                for(int j = 0;j < 5;j++)
                    scanf("%d",&mar[i][j]);
            int big[5];
            int sma[5];
            int pos1[5] = {0,0,0,0,0};
            int pos2[5] = {0,0,0,0,0};
            for(int j = 0;j < 5;j++)
            {
                 big[j] = mar[0][j];

                for(int i = 0;i < 4;i++)
                {
                    if(mar[i][j] > big[j])
                        {
                            big[j] = mar[i][j];
                             pos1[j] = i;

                        }
                }
                sma[j] = -332678;
                for(int i = 0;i < 4;i++)
                    if( mar[i][j] > sma[j] &&  i != pos1[j])
                        {
                            sma[j] = mar[i][j];
                            pos2[j] = i;
                        }
            }
            int p[5],q[5];
            for(int j = 0;j < 5;j++)
            {
                if(pos1[j] < pos2[j])
                    {
                        p[j] = big[j];
                        q[j] = sma[j];
                    }
                else
                    {
                        p[j] = sma[j];
                        q[j] = big[j];
                    }
            }
            for(int j = 0;j < 5;j++)
                printf("%d ",p[j]);
            printf("\n");
            for(int j = 0;j < 5;j++)
                printf("%d ",q[j]);
            printf("\n");
        }
    }
    return 0;
}
