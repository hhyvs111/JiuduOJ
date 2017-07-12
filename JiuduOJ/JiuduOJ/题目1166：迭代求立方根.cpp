#include<cstdio>
using namespace std;


int x;
double y(int n)
{
    if(n==0)    //如果y=0 就等于X  倒着迭代
        return x;
    return y(n-1) * (2.0/3.0) + x/(3*y(n-1)*y(n-1));
}
int main()
{
    int n;
    while(scanf("%d %d",&x,&n)!=EOF)
    {
        printf("%.6lf\n",y(n));
    }
    return 0;
}
