#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        int n[3];
        int temp;
        n[0]=a;
        n[1]=b;
        n[2]=c;
        for (int j = 0; j < 2; j++)
         for (int i = 0; i < 2 - j; i++)
         if(n[i] > n[i + 1])
            {
                temp=n[i];
                n[i]=n[i+1];
                n[i+1]=temp;
            }
        if(n[0]*n[0]+n[1]*n[1]==n[2]*n[2])
            printf("直角三角形\n");
        else if(n[0]*n[0]+n[1]*n[1]<=n[2]*n[2])
            printf("钝角三角形\n");
        else
            printf("锐角三角形\n");
    }
    return 0;
}
