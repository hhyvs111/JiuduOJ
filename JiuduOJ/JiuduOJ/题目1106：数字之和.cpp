#include<cstdio>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1 && n)
    {
        int sum1 = 0,sum2 = 0;
        int s = n;
        int h = n*n;
        while(s)
        {
            sum1 += s%10;
            s /= 10;
        }
        while(h)
        {
            sum2 += h%10;
            h /= 10;
        }
        printf("%d %d\n",sum1,sum2);
    }
    return 0;
}
