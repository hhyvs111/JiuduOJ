#include<cstdio>
#include<cstring>
#include<cctype>
#define maxn 10000
using namespace std;
int main()
{
    char a[maxn];
    scanf("%s",a);
    int len_a = strlen(a);
    char b[maxn];
    getchar();   //吸收空格
    while(gets(b))
    {
        char str[maxn];
        int num = 0;
//        printf("%s\n",b);
        int len_b = strlen(b);
        for(int i = 0;i < len_b ;i++)   //去除空格
        {
            if(b[i] != ' ')
            {
//                printf("%c ",b[i]);
                str[num] = b[i];
                num ++;
            }
        }
        int len_str = strlen(str);
//        printf("%d\n",len_str);
        len_str = strlen(str);
//        printf("%s\n",str);
        for(int i = 0;i < len_str; i++)   //去除字符
        {
            int cnt = 0;
            int flag = i;
            for(int j = 0; j < len_a;j++)
                {
                    char p = tolower(str[flag]);
                    char q = tolower(a[j]);
                    if(p == q )   // 如果相等
                    {
                        cnt++;
                        flag++;
                    }
                    else
                        break;

                }
            if(cnt == len_a)  //有相等的字符
            {
//                printf("相等\n");
                for(int k = i; k < len_str;k++)
                    {
                       str[k] = str[k+len_a];
                    }
                len_str -= len_a;

            }
        }
        printf("%s\n",str);
        memset(str,0,sizeof(str));
        memset(b,0,sizeof(b));

    }
    return 0;
}

