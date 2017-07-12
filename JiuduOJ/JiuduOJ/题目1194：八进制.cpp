#include<cstdio>
#include<stack>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n) == 1)
    {
        stack <int> s;
        if(n == 0)
        {
            printf("0\n");
            continue;
        }
        while(n)
        {
            s.push(n % 8);
            n /= 8;
        }
        while(!s.empty())
        {
            printf("%d",s.top());
            s.pop();
        }
        printf("\n");
    }
    return 0;
}
