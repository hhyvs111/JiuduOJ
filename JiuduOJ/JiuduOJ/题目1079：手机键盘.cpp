#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;


int main()
{
    char str[1000];
    while(scanf("%s",str)!=EOF)
    {
        int len = strlen(str);
        int time = 0;
        int pre_pos = 0;
        for(int i = 0;i < len;i++)
        {
            if(i >=1)
            pre_pos = str[i-1] - 'a' + 1;
            int rar_pos = str[i] - 'a' + 1 ;
            if(rar_pos<=19 && rar_pos >=16)  //进入2个特殊的区域
            {
                if(pre_pos<=19 && pre_pos >=16)    //前后在一起
                {
                    time +=2;
                }

               time += rar_pos-15;
            }
            else if(rar_pos>=23 && rar_pos <=26)
            {
                if(pre_pos>=23 && pre_pos <=26)    //前后在一起
                {
                    time +=2;
                }
                time += rar_pos - 22;
            }
            else if(rar_pos>=1 && rar_pos <=3)
            {
                if(pre_pos>=1 && pre_pos <=3)
                {
                    time +=2;
                }
                time += rar_pos;
            }
            else if(rar_pos>=4 && rar_pos <=6)
            {
                if(pre_pos>=4 && pre_pos <=6)
                {
                    time +=2;
                }

                time += rar_pos - 3;
            }
            else if(rar_pos>=7 && rar_pos <=9)
            {
                if(pre_pos>=7 && pre_pos <=9)
                {
                    time +=2;
                }
                time += rar_pos - 6;
            }
            else if(rar_pos>=10 && rar_pos <=12)
            {
                if(pre_pos>=10 && pre_pos <=12)
                {
                    time +=2;
                }
                time += rar_pos - 9;
            }
            else if(rar_pos>=13 && rar_pos <=15)
            {
                if(pre_pos>=13 && pre_pos <=15)
                {
                    time +=2;
                }
                time += rar_pos - 12;
            }
            else if(rar_pos>=20 && rar_pos <=22)
            {
                if(pre_pos>=20 && pre_pos <=22)
                {
                    time +=2;
                }
                time += rar_pos - 19;
            }

    }
    printf("%d\n",time);
    }
    return 0;
}
