#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int len = s.length();
        int flag = 1;
        for(int i = 0;i < len/2;i++)
            if(s[i] != s[len-i-1])
            {
                flag = 0;
                break;
            }
        if(flag)
            printf("Yes!\n");
        else
            printf("No!\n");

    }
    return 0;
}
