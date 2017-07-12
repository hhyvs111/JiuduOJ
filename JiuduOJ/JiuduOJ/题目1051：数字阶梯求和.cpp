#include <stdio.h>

int main()
{
    int a,n;        //存放a和n的值
    int i,j,k,c;      //循环变量
    while ((scanf("%d %d",&a,&n))!=EOF)
    {
        int temp;
        int num[101]={0};
        for (i=n;i>=1;i--)
        {
            temp=a*i;    //将和取出来   下面就是要考虑进位的问题
            k=i;
            while (temp) //该循环多少次呢 ？
            {
                c=num[k]+temp;
                num[k]=c%10;   //第一个值就已经取出来了
                temp=c/10;     //进位位数字
                k--;           //将进位位加到前一位数字上去
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
