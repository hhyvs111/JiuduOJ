#include<cstdio>
#include<iostream>
#define maxn 1000
using namespace std;
int main()
{

    for(int a = 0;a < 10;a++)  //±éÀúÒ»±é¾ÍOK
        for(int b = 0;b < 10;b++)
            for(int c = 0;c < 10;c++)
            {
                int abc,bcc;
                abc = a*100+b*10+c;
                bcc = b*100+c*10+c;
                if(abc+bcc == 532)
                    printf("%d %d %d\n",a,b,c);
            }
            return 0;
}
