#include<cstdio>
using namespace std;


int x;
double y(int n)
{
    if(n==0)    //���y=0 �͵���X  ���ŵ���
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
