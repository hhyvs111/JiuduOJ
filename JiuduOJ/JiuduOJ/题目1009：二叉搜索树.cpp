#include<stdio.h>
#include<string.h>
#define maxn 100000+10
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        char a[maxn],b[maxn];
        scanf("%s",a);
//        printf("%s",a);
        while(n--)
        {
            scanf("%s",b);
            if( (a[0]-'0') > (a[1]-'0') )  //�����һλ���ڵڶ�λ
            {
                if( (b[0]-'0') > (b[1]-'0'))
                    printf("NO\n");
                else
                    printf("YES\n");
            }
            else  //�����һλС�ڵڶ�λ
            {
                if( (b[0]-'0') < (b[1]-'0'))
                    printf("NO\n");
                else
                    printf("YES\n");
            }
        }
    }
    return 0;
}
