#include <stdio.h>

int main()
{
    int a,n;        //���a��n��ֵ
    int i,j,k,c;      //ѭ������
    while ((scanf("%d %d",&a,&n))!=EOF)
    {
        int temp;
        int num[101]={0};
        for (i=n;i>=1;i--)
        {
            temp=a*i;    //����ȡ����   �������Ҫ���ǽ�λ������
            k=i;
            while (temp) //��ѭ�����ٴ��� ��
            {
                c=num[k]+temp;
                num[k]=c%10;   //��һ��ֵ���Ѿ�ȡ������
                temp=c/10;     //��λλ����
                k--;           //����λλ�ӵ�ǰһλ������ȥ
            }
        }
        for (i=0;i<=n;i++)
        {
            if (i==0&&num[0]==0)
            {
                continue;
            }
            printf("%d",num[i]);
        }
        printf("\n");
    }

//  printf("%d",864%10);
    return 0;
}
