#include<cstdio>
#include<string.h>
#define maxn 500
using namespace std;

struct student
{
    char num[maxn];
    char a[maxn];
    char sex[maxn];
    int age;
};

int main()
{
    int n,m;
    scanf("%d",&n);
    student st[maxn];
    for(int i = 0;i < n;i++)
        scanf("%s %s %s %d",&st[i].num,st[i].a,st[i].sex,&st[i].age);
    scanf("%d",&m);
    for(int j = 0;j<m;j++)
    {
        char  xuehao[maxn];
        int cnt = 0;
        scanf("%s",xuehao);
        int i ;
        for( i = 0;i < n;i++)
        {
            if(strcmp(st[i].num,xuehao) == 0)    //字符串比较 等于0则相等
                {
                    printf("%s %s %s %d\n",st[i].num,st[i].a,st[i].sex,st[i].age);
                    cnt = 1;
                    break;
                }
        }
        if(i==n)
            printf("No Answer!\n");
    }
    return 0;
}
