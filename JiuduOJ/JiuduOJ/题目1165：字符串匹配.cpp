#include<cstdio>
#include<cstring>
#include<iostream>
#include<cctype>
#include<set>

#define maxn 1000
using namespace std;

struct str
{
    string s;
    int pos;
    int flag;
};
int main()
{
    int n;
    while(scanf("%d",&n) == 1)
    {
        str st[n];
        for(int i = 0 ;i < n;i++)
        {
            cin>>st[i].s;
            st[i].pos = i+1;
            st[i].flag = 0;
        }
        string pipei;
        cin>>pipei;
        set<string> dict;
        int kuo1 = -1,kuo2 = -1;
        for(int i = 0;i < pipei.length();i++)   //找出2个括号的位置
            if(pipei[i] == '[')
                kuo1 = i;
            else if(pipei[i] == ']')
                kuo2 = i;
        if(kuo1 == -1 && kuo2 == -1)
        {
            string s1 = pipei.substr(0,kuo1);
            string s2 = pipei.substr(kuo2+1,pipei.length()-1);
            for(int i = kuo1+1;i < kuo2;i++)
            {
                printf("%d\n",i);
                string s3 = s1+pipei[i]+s2;
                char s4[s3.length()];
                for(int j = 0;j < s3.length();j++)
                    s4[j] = tolower(s3[j]);
                dict.insert(s4);
            }
        }
        else
        {
            dict.insert(pipei);
        }
        for(set<string>::iterator ip = dict.begin();ip!=dict.end();ip++)
            cout<<*ip<<endl;

        for(int i = 0;i < n;i++)
        {
            char ss[st[i].s.length()];
            for(int j = 0;j < st[i].s.length();j++)
                ss[j] = tolower(st[i].s[j]);

        set<string>::iterator it = dict.find(ss);
        cout<<*it<<endl;
            if(it != dict.end())
                st[i].flag = 1;
        }
        for(int i = 0;i < n;i++)
            if(st[i].flag)
             cout<<st[i].pos<<" "<<st[i].s<<endl;
    }
    return 0;
}
