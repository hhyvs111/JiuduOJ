#include<cstdio>
#include<algorithm>
using namespace std;

struct student
{
    int num;
    int score;
};


bool cmp(student a,student b)
{
    if(a.score == b.score)
        return a.num < b.num;
    return a.score < b.score;
}
int main()
{
    int n;
    while(scanf("%d",&n) == 1)
    {
        student st[n];
        for(int i = 0 ; i < n;i++)
            scanf("%d %d",&st[i].num,&st[i].score);
        sort(st,st+n,cmp);
        for(int i = 0 ;i < n;i++)
            printf("%d %d\n",st[i].num,st[i].score);
    }
    return 0;
}
