#include<cstdio>
#include<algorithm>
using  namespace std;

struct mouse
{
    int wight;
    char hat[100];
};

bool cmp(mouse a,mouse b)
{
//    return a.wight < b.wight;   //��������������,��С����
    return a.wight > b.wight;   //�Ӵ�С
}
int main()
{
    int n;
    mouse m[1010];
    while(scanf("%d",&n)==1)
    {for(int i = 0;i < n;i++)
    {
        scanf("%d %s",&m[i].wight,&m[i].hat);
    }
    sort(m,m+n,cmp);
    for(int i = 0;i < n;i++)
        printf("%s\n",m[i].hat);
    }
    return 0;
}
