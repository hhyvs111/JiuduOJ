#include<cstdio>
#include<cmath>
#define maxn 10000

int is_shouxin(int n)
{
    int a = n*n;
    while(a && n )   //提取低位数
    {
        if(a % 10 != n%10)
            return 0;
        a /= 10;
        n /= 10;
    }
return 1;

}

int main()
{
    int n;
    while(scanf("%d",&n) == 1)
    {
        if(is_shouxin(n))
            printf("Yes!\n");
        else
            printf("No!\n");
    }
    return 0;
}
