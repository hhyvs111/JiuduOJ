#include<cstdio>
#include<iostream>
#include<string.h>
#define maxn 1000
using namespace std;
int main()
{
    int a[maxn];
    while(scanf("%d",&a[0])==1)
    {
        for(int i = 1;i < 20;i++)
        {
            scanf("%d",&a[i]);
        }
        int b[maxn];
//        for(int i = 0;i < 11;i++)  //��������
//            b[i]=0;
        memset(b,0,sizeof(b));  //��������
        for(int i = 0;i < 11;i++)  //��������
            printf("%d ",b[i]);
        for(int i=0;i < 20;i++)  //b��������Ӧ������+1
        {
            b[a[i]]++;
        }
        int max = 0 , ans = 0;
        for(int i = 1 ;i < 11;i++)  //����������ֵĸ���
        {
//            printf("%d\n",b[i]);
            if(b[i]>max)
            {
                max = b[i];
                ans = i;  //��¼λ��
//                printf("%d\n",max);
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}

