#include<cstdio>
#include<cmath>
#define maxn 100000
using namespace std;

long long num[maxn];



long long int JC(int n){
    long long int sum = 1;
    for(int i = 2;i <= n;i++){
        sum *= i;
    }
    return sum;
}

int main()
{
     long long n,sum_j,sum_o;
    while(scanf("%lld",&n)==1)
    {
        sum_j = 0;
        sum_o = 0;
        for(int i = 1;i <= n;i+=2)
            sum_j += JC(i);
        for(int i = 2;i <= n;i+=2)
            sum_o += JC(i);
        printf("%lld %lld\n",sum_j,sum_o);
    }
    return 0;
}
