#include<cstdio>
#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    int temp;
    while(b)
    {
        temp = b;  //շת�������ֱ��bΪ0Ϊֹ��
        b = a % b;   //���B��A����ụ��
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
