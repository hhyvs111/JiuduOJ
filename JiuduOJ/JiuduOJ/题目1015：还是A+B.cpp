#include<cstdio>
using namespace std;

int cmp(int a,int b,int k)
{
    int sum_a;
    int sum_b;
    while(k--)
    {
        if(a%10 != b%10)
            return 0;
        else
        {
            a /= 10;
            b /= 10;
        }
    }
    return 1;
}
int main()
{
    int a,b,k;
    while(scanf("%d %d %d",&a,&b,&k) == 3 )
    {
        if(a ==0 && b == 0)
            return 0;
        if(cmp(a,b,k))
            printf("-1\n");
        else
            printf("%d\n",a+b);
    }
    return 0;
}
