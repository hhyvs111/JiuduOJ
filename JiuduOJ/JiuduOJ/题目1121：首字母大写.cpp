#include<cstdio>
#include<cstring>
#include<cctype>
#define maxn 10000
using namespace std;

int main()
{
    char a[maxn];
    while(gets(a))
    {
        int len = strlen(a);
        int flag = 1;
        for(int i = 0;i < len;i++)
        {
            if(flag == 1)  //将第一个字符变成大写
            {
                a[i] = toupper(a[i]);
                flag = 0;
            }
            if(a[i] == ' ' || a[i] == '\t' || a[i] == '\r' || a[i] == '\n')
            {
                flag = 1;
            }
        }
        printf("%s\n",a);
        memset(a,0,sizeof(a));
        continue;
    }
    return 0;
}
