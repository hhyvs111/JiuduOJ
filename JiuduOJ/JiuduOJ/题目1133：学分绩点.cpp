#include<cstdio>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int xuefen[11],score[11];
        int sum_f = 0;
        for(int i = 0;i < n;i++)
        {
            scanf("%d",&xuefen[i]);
            sum_f += xuefen[i];
        }
        for(int i = 0;i < n;i++)
            scanf("%d",&score[i]);
        double jidian[11];
        for(int i = 0;i < n;i++)
        {
            if(score[i] <= 100 && score[i] >= 90)
                jidian[i] = xuefen[i] * 4.0;
            else if(score[i] <= 89 && score[i] >= 85)
                jidian[i] = xuefen[i] * 3.7;
            else if(score[i] <= 84 && score[i] >= 82)
                jidian[i] = xuefen[i] * 3.3;
            else if(score[i] <= 81 && score[i] >= 78)
                jidian[i] = xuefen[i] * 3.0;
            else if(score[i] <= 77 && score[i] >= 75)
                jidian[i] = xuefen[i] * 2.7;
            else if(score[i] <= 74 && score[i] >= 72)
                jidian[i] = xuefen[i] * 2.3;
            else if(score[i] <= 71 && score[i] >= 68)
                jidian[i] = xuefen[i] * 2.0;
            else if(score[i] <= 67 && score[i] >= 64)
                jidian[i] = xuefen[i] * 1.5;
            else if(score[i] <= 63 && score[i] >= 60)
                jidian[i] = xuefen[i] * 1.0;
            else
                jidian[i] = xuefen[i] * 0;
        }
        double sum_j = 0;
        for(int i = 0;i < n;i++)
            sum_j += jidian[i];
        printf("%.2f\n",sum_j/double(sum_f));
    }
    return 0;
}
