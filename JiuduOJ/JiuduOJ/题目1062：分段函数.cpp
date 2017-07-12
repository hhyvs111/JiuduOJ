#include<cstdio>

using namespace std;
int main()
{
    double n;
    while(scanf("%lf",&n)==1)
    {
        if( n >= 0 && n < 2)
        {
            n = 0 - n;
//            printf("%lf\n",n);
            printf("%.3f\n",(n+2.5));
        }

        else if( n >= 2 && n < 4)
            printf("%.3f\n",(2-1.5*(n-3)*(n-3)));
        else if( n >= 4 && n < 6)
            printf("%.3f\n",n/2.0-1.5);
    }
    return 0;
}
