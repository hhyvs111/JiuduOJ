#include<cstdio>
#define maxn 10000
using namespace std;

int fi(int a[],int n,int x)
{
    int flag = 1;  //1�����Ҳ�����0�����ҵ���
    for(int i = 0;i < n;i++)
        if(a[i] == x)
            flag = 0;
    return flag ;
}
int main()
{
    int mianzhi = 0;
    int n = 0;
    int flag;
    int a[maxn];
    for(int i = 0;i <= 5;i++)  // 8ë����������ѭ��5��
    {
        for(int j = 0;i <= 4;j++)   //1���������
        {
            for(int k = 0;k <= 6;k++) //1��8����6��
            {
                mianzhi = i*8 + 10*j + 18*k ;
                printf("%d\n",mianzhi);
                if(fi(a,n,mianzhi) == 1)
                {
                    a[n] = mianzhi;
                    n++;
                   // printf("%d\n",n);
                }
            }
        }
    }
    printf("%d\n",n-1);
    return 0;

}
