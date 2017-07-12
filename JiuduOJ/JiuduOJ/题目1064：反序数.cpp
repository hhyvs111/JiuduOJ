#include<cstdio>
#define maxn 1000

using namespace std;


int main()
{
    int i,m,n;
    for(i = 1000;i < 10000;i++)
    {
        n = i;
        m = 0;
        //Çó·´ÐòÊý
        while(n)
        {
            m=m*10+n%10;
            n=n/10;
        }
        if(m==i*9)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}

