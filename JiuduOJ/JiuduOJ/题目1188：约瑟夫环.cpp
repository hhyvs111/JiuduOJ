#include<cstdio>
#define maxn 1000
using namespace std;

int main()
{
    int n,p;
    while(scanf("%d %d",&n,&p) == 2)
    {
        if(n == 1)
            {
                printf("1\n");
                continue;
            }
        int visit[n+1];
        for(int i = 1; i <= n;i++)
            {
                visit[i] = 1;
            }
        int bushu = 1;
        int cnt = 0;
        int num = 1;
        while(1)   //����ģ��Լɪ��
        {
            if(bushu == p && visit[num] == 1)     //�������ﵽp���жϸ�λ���Ƿ�����Ч��λ��
            {
                visit[num] = 0;
                bushu = 1;
                printf("%d ",num);
                cnt++;
                if(cnt == n - 1)
                    break;
            }
            if(visit[num] == 1)    //�����λ��û�����������Ч����
            {
                bushu++;
                num++;
                if(num > n)
                    num = num % n;
            }
            else                   //��Ч����
            {
                num++;
                if(num > n)
                    num = num % n;
            }
        }
        for(int i = 1;i <= n;i++)
            if(visit[i])
            printf("%d\n",i);
    }
    return 0;
}
