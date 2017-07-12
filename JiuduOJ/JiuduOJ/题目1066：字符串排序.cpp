#include<cstdio>
#include<string.h>
#define maxn 1000
using namespace std;

int main()
{
    char a[maxn];
    while(scanf("%s",a)==1)
    {
        int n = strlen(a);
        for(int i = 0;i < n;i++)
            for(int j = 0;j < n-1-i;j++)
                if(a[j] > a[j+1] )
                {
                    char temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
        printf("%s\n",a);
    }
}
