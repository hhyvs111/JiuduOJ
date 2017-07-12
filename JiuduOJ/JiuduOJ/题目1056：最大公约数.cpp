#include<cstdio>
#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    int temp;
    while(b)
    {
        temp = b;  //辗转相除法，直到b为0为止！
        b = a % b;   //如果B比A大则会互换
        a = temp;
    }
    return a;
}
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)==2)
    {
        printf("%d\n",gcd(a,b));
    }
    return 0;
}
