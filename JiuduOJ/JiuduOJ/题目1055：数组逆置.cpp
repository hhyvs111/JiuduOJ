#include<cstdio>
#include<iostream>
#include<stack>
#include<cstring>
#define maxn 1000
using namespace std;

int  main()
{
    stack<char>a;
    char c[maxn];
    while(scanf("%s",c)!=EOF)
    {
        for(int i = 0;i < strlen(c);i++)
        {
            a.push(c[i]);
//            printf("%c",c[i]);
        }
//        for(int i = 0;i < strlen(c);i++)
//            {
//
//                printf("%s",a.pop());
//            }

        while(!a.empty())
        {
            printf("%c",a.top());   // top返回栈顶元素
            a.pop();  //移除栈顶元素 void类型的
        }
        printf("\n");
    }
    return 0;
}

