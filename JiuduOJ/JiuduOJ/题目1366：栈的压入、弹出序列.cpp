#include<cstdio>
#include<stack>
#define maxn 200000
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n) == 1)
    {
        int a[maxn],b[maxn];
        stack <int> s;
        for(int i = 0;i < n;i++)
            scanf("%d",&a[i]);
        for(int i = 0;i < n;i++)
            scanf("%d",&b[i]);
        int pos_a = 0,pos_b = 0;
        int flag = 0;
        while(pos_a < n && pos_b < n)
        {
            if(a[pos_a] != b[pos_b])   //不相等入栈
            {
                s.push(a[pos_a++]);
//                printf("%d\n",pos_a);
            }
            else
            {
                pos_a++;
                pos_b++;
            }
        }
//        printf("%d %d\n",pos_a,pos_b);
        if(pos_b < n)
        {
            while(pos_b < n)
            {
                if(s.top() == b[pos_b])
                {
                     s.pop();
                     pos_b++;
                }
                else
                {
                    flag = 0;
                    break;
//                  printf("%d\n",pos_b);
                }
            }
        }
//        printf("end = %d\n",pos_b);
         if (pos_a == n && pos_b == n && s.empty())
                flag = 1;
         else
            flag = 0;
        if(flag)
            printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;

}
