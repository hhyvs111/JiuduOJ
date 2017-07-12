#include<cstdio>
#include<algorithm>
#define maxn 1000
using namespace std;

struct employee
{
    int num;
    char name[11];
    int age;
};

bool cmp(employee a,employee b)
{
    if(a.age == b.age)
        return a.num < b.num; //¹Ø¼ü×ÖË³Ðò
    return a.age < b.age;

}
int main()
{
    int n;
    while(scanf("%d\n",&n) == 1)
    {
        employee emp[n];
        for(int i = 0;i < n;i++)
            scanf("%d %s %d",&emp[i].num,emp[i].name,&emp[i].age);
        sort(emp,emp+n,cmp);

        if(n > 3)
            for(int i = 0;i < 3;i++)
            printf("%d %s %d\n",emp[i].num,emp[i].name,emp[i].age);
        else
            for(int i = 0;i < n;i++)
            printf("%d %s %d\n",emp[i].num,emp[i].name,emp[i].age);
    }
    return 0;
}
