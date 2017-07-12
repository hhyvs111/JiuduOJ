#include<cstdio>
using namespace std;

int fa(int n)
{
    if(n == 0)
        return 0;
    else if( n == 1)
        return 1;
    else
        return fa(n-1)+fa(n-2);
}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        for(int i = 1;i <= n;i++)
        {
            for(int j = 0; j <2*i-1;j++)
                {
                    printf("%d",fa(j));
                    if(j != 2*i-2)
                        printf(" ");
                    else
                    printf("\n");
                }
        }
    }
    return 0;
}
