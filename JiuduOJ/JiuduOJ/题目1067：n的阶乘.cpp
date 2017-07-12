#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n,i;
    while(scanf("%d",&n) != EOF)
    {
        double count = 1;
        for(i = 1;i <= n;i++){
            count *= i;
        }
        printf("%.0lf\n",count);
    }
    return 0;
}
