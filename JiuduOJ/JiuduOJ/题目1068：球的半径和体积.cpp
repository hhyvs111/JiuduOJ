#include<cstdio>
#include<math.h>
using namespace std;

int main()

{
    double a;
    while(scanf("%lf",&a)==1)
    {
        double b,c,x,y,z;
        scanf("%lf %lf %lf %lf %lf",&b,&c,&x,&y,&z);
        double r = sqrt( (x-a)*(x-a) + (y-b)*(y-b) + (z-c)*(z-c) );
        double v = (acos(-1) *r*r*r*4.000)/3.000;
        printf("%.3lf %.3lf\n",r,v);
    }
    return 0;
}
