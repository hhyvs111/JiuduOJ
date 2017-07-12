#include<cstdio>
using namespace std;

int main()
{
    int a,b;
    char y[2];
    while(scanf("%d",&a)==1)
    {
        scanf("%s",y);
        if(y[0] != '!')
            scanf("%d",&b);
        if(y[0] == '+')
            printf("%d\n",a+b);
        else if(y[0] == '-')
            printf("%d\n",a-b);
        else if(y[0] == '*')
            printf("%d\n",a*b);
        else if(y[0] == '/')
        {
            if(b==0)
                printf("error\n");
            else
                printf("%d\n",a/b);
        }
        else if(y[0] == '!')
        {
            int ans = 1;
            for(int i =1;i<=a;i++)
                ans *= i;
            printf("%d\n",ans);
        }
        else if(y[0] == '%')
        {
            if(b==0)
                printf("error\n");
            else
            printf("%d\n",a%b);
        }
//        printf("%d %c %d\n",a,y[0],b);
    }
    return 0;
}
