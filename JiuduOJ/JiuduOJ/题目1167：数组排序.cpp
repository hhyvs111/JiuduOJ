#include<cstdio>
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
#define maxn 10001


int search_num(int n,int b[],int a)
{
    for(int i = 1;i <= n;i++)
        if(a == b[i])
            return i;
}
int main()
{
    int n;

    while(scanf("%d",&n)==1)
    {
        set<int>num;
        int  a[maxn],b[maxn];
        int pos = 1;
        for(int i = 0;i < n;i++)
        {
            scanf("%d",&a[i]);
            num.insert(a[i]);
        }
        for(set<int>::iterator it = num.begin(); it != num.end(); it++)   //set »•÷ÿ≤¢≈≈–Ú
            {
                b[pos] = *it;
                pos++;
            }
        int j ;
        for( j = 0;j < n-1;++j)
        {
            printf("%d ",search_num(n,b,a[j]));
        }
        printf("%d\n",search_num(n,b,a[j]));



    }
    return 0;
}
