#include<cstdio>
using namespace std;
int main()
{
    int n,m,mi;
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {

            scanf("%d",&m);
            if(m % 2 == 1)
                printf("0 0\n");
            else
            {
                if(m % 4 == 0)
                    mi = m/4;
                else
                    mi = m/4 + 1;

                printf("%d %d\n",mi,m/2);
            }

        }

    }
    return 0;
}
