#include<stdio.h>
#include<string.h>
#define maxn 10000
int main()
{
    char s[maxn];

    while(scanf("%s",s)!=EOF)
    {
        for(int i = 0;i < strlen(s);i++)
            for(int j = i ; j < strlen(s);j++)
            {
                if(s[i]>s[j])
                {
                    char temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
            printf("%s\n",s);
    }
    return 0;
}
