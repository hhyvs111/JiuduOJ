#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;


void turn_ni_4(int a[][6],int x,int y)   //不能这样换，要设置一个中立二维数组
{
    int b[6][6];   //中立二维数组
    for(int i = x;i < x+2;i++)
        for(int j = y; j < y+2;j++)
            {
                b[i][j] = a[j][x+2-i];
            }
    for(int i = x;i < x+2;i++)
        for(int j = y;j < y+2;j++)
            a[i][j] = b[i][j];
}

void turn_ni_9(int a[][6],int x,int y)
{
    int b[6][6];
    for(int i = x;i < x+3;i++)
        for(int j = y; j < y+3;j++)
            {
                b[i][j] = a[j][x+3-i];
            }
    for(int i = x;i < x+3;i++)
        for(int j = y;j < y+3;j++)
            a[i][j] = b[i][j];
}

void turn_shun_4(int a[][6],int x,int y)
{
   int b[6][6];
    for(int i = x;i < x+2;i++)
        for(int j = y; j < y+2;j++)
            {
                b[i][j] = a[x+2-j][i];
            }
    for(int i = x;i < x+2;i++)
        for(int j = y;j < y+2;j++)
            a[i][j] = b[i][j];
}

void turn_shun_9(int a[][6],int x,int y)
{
    int b[6][6];
    for(int i = x;i < x+3;i++)
        for(int j = y; j < y+3;j++)
            {
                b[i][j] = a[x+3-j][i];
            }
    for(int i = x;i < x+3;i++)
        for(int j = y;j < y+3;j++)
            a[i][j] = b[i][j];
}

int main()
{
    int a[6][6];
    while(scanf("%d %d %d %d %d",&a[1][1],&a[1][2],&a[1][3],&a[1][4],&a[1][5]) == 5)
    {
        for(int i = 2;i < 6;i++)
            for(int j = 1;j < 6;j++)
            scanf("%d",&a[i][j]);
        int p,q,x,y;
        scanf("%d %d %d %d",&p,&q,&x,&y);
        if(p == 1 && q == 2)
            turn_shun_4(a,x,y);
        else if(p == 1 && q == 3)
            turn_shun_9(a,x,y);
        else if(p == 2 && q == 2)
            turn_ni_4(a,x,y);
        else if(p == 2 && q == 3)
            turn_ni_9(a,x,y);
        for(int i = 1;i < 6;i++)
        {
            for(int j = 1;j < 5;j++)
                printf("%d ",a[i][j]);
            printf("%d\n",a[i][5]);
        }
    }
    return 0;
}
