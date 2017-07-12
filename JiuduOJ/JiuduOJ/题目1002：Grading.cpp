#include<stdio.h>
#include<math.h>
#include<cstdlib>
//1.这个问题先由两个专家评分，如果两者差距在容忍范围内 G1-G2<=T则 答案为2者的平均数
//2.如果两者差距超过容忍范围T 则考虑G3
//3.如果G3和G1或G2在容忍范围内，但是不是都在 则答案为G3和与G3最近的一个的平均数
//4.如果G3和G1与G2都在容忍范围内，则答案为三者最高的
//5.如果G3和G1与G2都不再容忍范围内，则答案为GJ
int main()
{
    int p,t,g1,g2,g3,gj;
    while(scanf("%d %d %d %d %d %d",&p,&t,&g1,&g2,&g3,&gj)==6)
    {

        if(abs(g1-g2) <= t)
            printf("%.1lf\n",(double)((g1+g2)/2.0));
        else
        {
            if(abs(g1-g3) <= t && !(abs(g2-g3) <= t))
            {
                if(abs(g1-g3) > abs(g2-g3))
                    printf("%.1lf\n",(double)((g2+g3)/2.0));
                else
                    printf("%.1lf\n",(double)((g1+g3)/2.0));
            }
            else if(!(abs(g1-g3) <= t) && (abs(g2-g3) <= t))
            {
                if(abs(g1-g3) > abs(g2-g3))
                    printf("%.1lf\n",(double)((g2+g3)/2.0));
                else
                    printf("%.1lf\n",(double)((g1+g3)/2.0));
            }
            else if(abs(g1-g3) <= t && abs(g2-g3) <= t)
            {
                if(g1>g2 && g1>g3)
                    printf("%.1lf\n",(double)g1);
                else if(g2 >g1 && g2>g3)
                    printf("%.1lf\n",(double)g2);
                else
                    printf("%.1lf\n",(double)g3);
            }
            if(!(abs(g1-g3) <= t) && !(abs(g2-g3) <= t))
                printf("%.1lf\n",(double)gj);
        }
    }
    return 0;
}
