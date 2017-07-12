#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstring>
#include<stack>
using namespace std;
int main()
{
    int a;
    while(scanf("%d",&a)==1)    //A进制的数
    {
        char n[10000];
        int b;
        scanf("%d %s",&b,n);  //转换成B进制的数
        long long ten = 0;
        long long beishu = 0;
        for(int i = strlen(n)-1;i >= 0;i--)
        {
            if(isdigit(n[i]))
            {
                ten += (n[i] - '0') * (int)(pow(a,beishu)+0.5);
//               printf("shuzi %d %d\n",ten,beishu);
//            int haha = pow(a,beishu);
//                printf("%d\n",haha);
                beishu++;
            }
            else
            {
                n[i] = toupper(n[i]);
                ten += (10+(n[i] - 'A')) * (int)(pow(a,beishu)+0.5);
//                printf("zifu %d %d  \n",ten,beishu,10+(n[i] - 'A'));
//                int haha = pow(a,beishu);
//                printf("%d\n",haha);
                beishu++;
            }
        }
        stack <char> num;
        while(ten)
        {
            if(ten%b >= 10)
            {
                num.push(ten%b-10 + 'a');
            }
            else
                num.push(ten%b + '0');
                ten /= b;
        }
        if(num.empty())
            printf("0\n");
        else
        {
            while(!num.empty())
            {
                printf("%c",num.top());
                num.pop();
            }
                printf("\n");
        }

    }
    return 0;
}
