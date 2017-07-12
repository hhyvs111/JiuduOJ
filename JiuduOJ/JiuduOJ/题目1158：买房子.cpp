#include<cstdio>
using namespace std;

int main()
{
    int n,k;
    while(scanf("%d %d",&n,&k) == 2)
    {
        int year = 1;
        int xinshui = n;
        double house = 200;
        double point = k/100.0;
        while(xinshui < house && year <= 20)
        {
            double house_add = house * point;
//            printf("%f\n",house_add);
           house = house + house * point;
//            printf("%f ",house);
           year ++;
           xinshui += n;
//           printf("%d ",n);
        }
        if(year > 20)
            printf("Impossible\n");
        else
            printf("%d\n",year);
    }
    return 0;
}
