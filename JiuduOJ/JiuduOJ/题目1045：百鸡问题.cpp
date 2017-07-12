#include<iostream>
#include<cstdio>
using namespace std;
int main()
    {
    int n;
    while(scanf("%d",&n)==1)
    {
        for(int i = 0; i <= 100; i++)
        for(int j = 0; j <= 100; j++)
        {
            if((14 * i + 8 * j) <= n * 3 - 100)
            printf("x=%d,y=%d,z=%d\n",i,j,100-i-j);
            else
            break;
        }
    }
    return 0;
    }
