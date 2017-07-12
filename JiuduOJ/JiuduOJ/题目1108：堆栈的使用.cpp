#include<cstdio>
#include<stack>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1 && n)
    {
        stack<int>a;
        while(n--)
        {
            char c[2];
            scanf("%s",c);
            if(c[0] == 'A')
            {

                if(a.empty())
                    printf("E\n");
                else
                    {
                        printf("%d\n",a.top());
                    }
            }
            else if(c[0] == 'P')
            {
                int num;
                scanf("%d",&num);
                a.push(num);
            }
            else if(c[0] == 'O')
            {
                if(a.empty())
                {

                    continue;
                }
                a.pop();
            }
        }
        printf("\n");
    }
    return 0;
}
