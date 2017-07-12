#include<cstdio>

using namespace std;

int fa(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fa(n-1)+fa(n-2);
}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("%d\n",fa(n));
    }
    return 0;
}
