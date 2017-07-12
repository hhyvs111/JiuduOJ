#include <iostream>
#include <string>
#include <cstdio>
#define maxn 10000
using namespace std;
string str[]={"zero","one","two","three","four","five","six","seven","eight","nine"};

int input()
{
    string a;
    int s1=0;
    while(cin>>a)
    {
        if(a=="+"||a=="=")
            break;
        for(int i=0;i<10;i++)
            if(a == str[i])
            {
                s1=s1*10+i;
                break;
            }
    }
    return s1;
}
int main()
{
    int a,b;
    while(1)
    {
        a=input();
        b=input();
        if(a==0 && b==0)
            return 0;
        printf("%d\n",a+b);
    }
    return 0;
}
