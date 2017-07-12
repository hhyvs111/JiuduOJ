#include <set>  //set 用法
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    while(cin >> str)
    {
        set<string> s;
        s.insert(str);
        while(str.size()>1)
        {
            str = str.substr(1);
            s.insert(str);
        }
        set<string>::iterator it;    //set 自动排序
        for(it=s.begin(); it!=s.end(); it++)
            cout << *it << endl;
    }
    return 0;
}
