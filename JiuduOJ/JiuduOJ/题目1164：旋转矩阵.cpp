#include<cstdio>
using namespace std;



bool  zero(int a[][10],int b[][10],int n)      //二维数组传参的时候，第二维必须要保证和实参相同
{
    for(int i = 0;i < n;i++)
            for(int j = 0;j < n;j++)
                if(a[i][j] != b[i][j])
                    return false;
    return true;
}

int  d_90(int a[][10],int b[][10],int n)
{
    for(int i = 0;i < n;i++)
        for(int j = 0;j < n;j++)
            if(a[i][j] != b[j][n-i-1])     //注意不是n-i ，因为数组从0开始
                    {
//                        printf("%d %d\n",a[i][j],b[j][n-i-1]);
                        return 0;
                    }
    return 1;
}


int  d_180(int a[][10],int b[][10],int n)
{
    for(int i = 0;i < n;i++)
        for(int j = 0;j < n;j++)
            if(a[i][j] != b[n-i-1][n-j-1])
                    return 0;
    return 1;
}


int  d_270(int a[][10],int b[][10],int n)
{
    for(int i = 0;i < n;i++)
        for(int j = 0;j < n;j++)
            if(a[i][j] != b[n-j-1][i])
                    return 0;
    return 1;
}
int main()
{

    int n;
    while(scanf("%d",&n)==1)
    {
        int a[10][10],b[10][10];
        for(int i = 0;i < n;i++)
            for(int j = 0;j < n;j++)
                scanf("%d",&a[i][j]);    //输入矩阵
        for(int i = 0;i < n;i++)
            for(int j = 0;j < n;j++)
                scanf("%d",&b[i][j]);

        if(zero(a,b,n))
            printf("0\n");
        else if(d_90(a,b,n))
            printf("90\n");
        else if(d_180(a,b,n))
            printf("180\n");
        else if(d_270(a,b,n))
            printf("270\n");
        else
            printf("-1\n");

    }
    return 0;
}
