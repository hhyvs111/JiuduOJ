#include<cstdio>
#include<map>
#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    char str[1000];
    char singe[101][101];
    char a[100],b[100];
    while(gets(str))
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        scanf("%s %s",a,b);
        int k = 0,j = 0;   //���������ά����ļ�ʱ��
        for(int i = 0 ;i < strlen(str);i++)
        {
            if(str[i] != ' ')
            {
                singe[k][j] = str[i];
                j++;
            }                               //�����ʷ����ά�ַ�������
            else
            {
                k++;
                j = 0;
            }
        }
         for(int i = 0;i <= k;i++)
        {
            if(strcmp(singe[i],a)==0)
            {

                strcpy(singe[i],b);     //��B���Ƶ�singe��
            }
        }
        int p;
        for( p = 0;p < k; p++)
        {
            printf("%s ",singe[p]);
        }
        printf("%s\n",singe[p]);
        memset(str,0,sizeof(str));
        gets(str);
    }
    return 0 ;
}

