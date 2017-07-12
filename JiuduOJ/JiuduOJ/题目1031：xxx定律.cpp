#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        int cnt = 0;
        scanf("%d",&n);
        if(n==0)
            break;
        while(1)
        {
        if(n%2==0 && n!=1)
            {
                n=n/2;
                cnt++;
            }
        if(n%2!=0 && n!=1)
        {
            n=3*n+1;
            //printf("%d\n",cnt);
            n=n/2;
            cnt++;
        }
        if(n==1)
            {
                printf("%d\n",cnt);
                cnt=0;
                break;
            }
        }

    }
    return 0;
}
