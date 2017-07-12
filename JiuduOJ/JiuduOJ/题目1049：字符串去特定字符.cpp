#include<stdio.h>
#include<string.h>
#define maxn 10000
int main ()
{
    char s[maxn];
    while(scanf("%s",s)==1)
    {
        char a[maxn];
        scanf("%s",a);
        //printf("%s",a);
        for(int i = 0; i < strlen(s);i++)
            if(s[i] != a[0])
                printf("%c",s[i]);
            else
                continue;
        printf("\n");
    }
    return 0;
}
