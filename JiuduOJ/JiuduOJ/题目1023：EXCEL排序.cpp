#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

struct student
{
    int num;
    char name[100];
    int score;
};

bool cmp1(student x, student y)
{
    return x.num<y.num;
}

bool cmp2(student x, student y)
{
    int t=strcmp(x.name,y.name);
    if(t!=0)
    return t<0;
    return x.num<y.num;
}

bool cmp3(student x, student y)   //比较函数
{
    if(x.score!=y.score)
    return x.score<y.score;
    return x.num<y.num;
}

student st[100000+10];
int main()
{
    int n;
    int cnt = 1;

    while(scanf("%d",&n)==1 && n)
    {
        int ca;
        scanf("%d",&ca);
        for(int i = 0; i < n;i++)
            scanf("%d %s %d",&st[i].num,st[i].name,&st[i].score);
        if(ca==1)
        {
            sort(st,st+n,cmp1);
        }
        else if(ca==2)
        {
            sort(st,st+n, cmp2);
        }
        else
        {
            sort(st, st+n, cmp3);
        }
            printf("Case %d:\n",cnt);
            cnt++;
            for(int i = 0;i < n;i++)
                printf("%06d %s %d\n",st[i].num,st[i].name,st[i].score);
        }

    return 0;
}
//        if(ca == 1)
//        {
//            for(int i = 0;i < n;i++)
//                for(int j = 0;j< n-i-1;j++)
//                if(st[j].num > st[j+1].num)
//                {
//                     temp = st[j];
//                    st[j] = st[j+1];
//                    st[j+1] = temp;
//                }
//                printf("Case %d:\n",cnt);
//                cnt++;
//            for(int i = 0;i < n;i++)
//                printf("%06d %s %d\n",st[i].num,st[i].name,st[i].score);
//        }
//        else if(ca == 2)
//        {
//            for(int i = 0;i < n;i++)
//                for(int j = 0;j< n-i-1;j++)
//                if(strcmp(st[j].name,st[j+1].name) > 0)
//                {
//                     temp = st[j];
//                    st[j] = st[j+1];
//                    st[j+1] = temp;
//                }
//                else if(strcmp(st[j].name,st[j+1].name) == 0)   //如果姓名相同 则按照学号来排
//                {
//                    if(st[j].num > st[j+1].num)
//                    {
//                         temp = st[j];
//                        st[j] = st[j+1];
//                        st[j+1] = temp;
//                    }
//                }
//                printf("Case %d:\n",cnt);
//                cnt++;
//            for(int i = 0;i < n;i++)
//                printf("%06d %s %d\n",st[i].num,st[i].name,st[i].score);
//        }
//        else
//        {
//            for(int i = 0;i < n;i++)
//                for(int j = 0;j< n-i-1;j++)
//                if(st[j].score > st[j+1].score)
//                {
//                     temp = st[j];
//                    st[j] = st[j+1];
//                    st[j+1] = temp;
//                }
//                else if(st[j].score == st[j+1].score)   //如果分数相同 则按照学号来排
//                {
//                    if(st[j].num > st[j+1].num)
//                    {
//                         temp = st[j];
//                        st[j] = st[j+1];
//                        st[j+1] = temp;
//                    }
//                }
//                printf("Case %d:\n",cnt);
//                cnt++;
