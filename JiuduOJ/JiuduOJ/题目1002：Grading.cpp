#include<stdio.h>
#include<math.h>
#include<cstdlib>
//1.���������������ר�����֣�������߲�������̷�Χ�� G1-G2<=T�� ��Ϊ2�ߵ�ƽ����
//2.������߲�೬�����̷�ΧT ����G3
//3.���G3��G1��G2�����̷�Χ�ڣ����ǲ��Ƕ��� ���ΪG3����G3�����һ����ƽ����
//4.���G3��G1��G2�������̷�Χ�ڣ����Ϊ������ߵ�
//5.���G3��G1��G2���������̷�Χ�ڣ����ΪGJ
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
