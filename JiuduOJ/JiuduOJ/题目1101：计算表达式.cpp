#include<cstdio>
#include<stack>
#include<cstring>
#include<cctype>
using namespace std;

int main()
{
    char ch;
    int i,j,temp,a[100];
    while(scanf("%d",&temp)!=EOF)
    {
        i =1;
        a[0] = 0;
        a[1] = temp;
        while(scanf("%c",&ch)!=EOF && ch!='\n')
        {
            scanf("%d",&temp);
            if(ch == '-')a[++i] = -temp;   //牛逼的思路  加减就放入数组，优先乘除
            else if(ch == '+')a[++i] = temp;
            else if(ch == '*')a[i] *= temp;
            else if(ch == '/')a[i] /= temp;
        }
        for(j=1;j<=i;++j)
            a[0]+=a[j];
        printf("%d\n",a[0]);

    }

return 0;
}
