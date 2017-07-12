#include<cstdio>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int ans_e[61],ans_g[61];
    int e=0,g=0;
    memset(ans_e,0,sizeof(ans_e));
    memset(ans_g,0,sizeof(ans_g));
    for(int i = 1;i < 61;i++)  //计算完数和盈数
    {
        int cnt = 0;
       for(int j = 1;j < i;j++)
       {

           if(i%j==0)
            {
             cnt+=j;
            }
       }
       if(cnt == i)
        {
            ans_e[i]++;
            e++;
            cnt = 0;
        }
       if(cnt > i)
       {
         ans_g[i]++;
         g++;
         cnt = 0;
       }
       cnt = 0;
    }
//    printf("%d %d",e,g);
    printf("E: ");
    for(int i = 1;i < 61;i++)
    {
        if(ans_e[i])
        {
            printf("%d",i);

            if(e>1)
                printf(" ");
            else
                printf("\n");
            e--;
        }
    }
        printf("G: ");
    for(int i = 1;i < 61;i++)
    {
        if(ans_g[i])
        {
            printf("%d",i);

            if(g>1)
                printf(" ");
            else
                printf("\n");
            g--;
        }
    }
    return 0;
}
