#include<cstdio>
#include<string.h>
#include<iostream>
#include<algorithm>
#define maxn 1000
using namespace std;
bool cmp(string a,string b)
{
    return a.length() < b.length();

}
int main()
{
    string str[maxn];   //字符数组
    int i = 0;
    while(cin >> str[i])   //EOF½áÊøÊäÈë
    {
        i++;
    }
        int n = i;
        sort(str,str+n,cmp);
        int min_len = str[0].length();
        int max_len = str[n-1].length();
        if(min_len == max_len)
        {
            for(int j = n-1;j >= 0;j--)
                if(str[j].length() == max_len)
                    cout<<str[j]<<endl;
        }
        else
        {
            for(int j = 0;j < n;j++)
            {
                if(str[j].length() == min_len)
                    cout<<str[j]<<endl;
            }
            for(int j = n-1;j >= 0;j--)
                if(str[j].length() == max_len)
                    cout<<str[j]<<endl;
        }


    return 0;
}
