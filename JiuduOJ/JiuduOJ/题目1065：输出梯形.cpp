#include<cstdio>

#define maxn 10000

using namespace std;

int main()
{
    int n ;
    while(scanf("%d",&n)==1)
    {
        for(int j = 0; j < n;j++)
        {
            for(int i = 0; i < 2*(n-1-j);i++)
                printf(" ");
            for(int i = 0; i < 2*j + n;i++)
                printf("*");
            printf("\n");
        }
    }
}
