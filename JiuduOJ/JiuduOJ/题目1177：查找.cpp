#include<cstdio>
#include<cstring>
using namespace std;
#define maxn 1000

void change(int k,int len)
{

}

int main()
{
    char a[maxn];
    while(scanf("%s",a)!=EOF)
    {
        int n;
        scanf("%d",&n);
        while(n--)
        {
            char b[maxn];
            scanf("%s",b);
            if(b[0] == '0')    //·­×ª
            {
                int k = b[1] - '0';
                int len = b[2] - '0';
                for(int i = 0;i < len/2;i++)
                {
                    char temp = a[k+i];
                    a[k+i] = a[len+k-i-1];
                    a[len+k-i-1] = temp;
                }
                printf("%s\n",a);
            }
            else if(b[0] == '1')
            {
                int k = b[1] - '0';
                int len = b[2] - '0';
                int num = 3;
                char ch[maxn];
                for(int i = 0;i < len;i++)
                    ch[i] = b[num++];
                int xx = 0;
                for(int i = k;i < k+len;i++)
                    a[i] = ch[xx++];
                printf("%s\n",a);
//                printf("%d\n",strlen(a));
                memset(ch,0,sizeof(ch));
            }
        }
        memset(a,0,sizeof(a));
    }
    return 0;
}
