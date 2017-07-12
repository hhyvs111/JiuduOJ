#include<cstdio>
#include<cstring>
#include<stack>
#define maxn 10000
using namespace std;

int main()
{
    char str[101];
    while(scanf("%s",str)!=EOF)
    {
        stack<char>a;
        int ans[101];
        memset(ans,0,sizeof(ans));
        int len = strlen(str);
        int i = 0;
        int flag[100];
        int cnt = 0;
        for(int i = 0;i < len;i++)
        {
            if(str[i] == ')')
            {
                if(a.top() != '(' || a.empty())
                    ans[i] = 0;   //0是问号
                else
                {
                    a.pop();
                    ans[i] = 2;             //记录的位置变为0
                    ans[flag[cnt]] = 2;
                }
            }
            else if(str[i] == '(')   //要记录（的位置
            {
                a.push(str[i]);
                flag[cnt] = i;
                cnt ++;
            }
            else
                ans[i] = 2;  //2是空格
        }
        printf("%d\n",cnt);
       // printf("%s\n",str);

    }
    return 0;
}
