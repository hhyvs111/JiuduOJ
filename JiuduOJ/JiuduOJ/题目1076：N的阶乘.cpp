#include <stdio.h>
int a[26000];
int main()
{
    int n, i, j,  len, t;
    while(~scanf("%d", &n))
    {
        if(n==0)//小细节需要考虑0！=1
        {
            printf("1\n");
            continue;
        }
        for(t = n,i = 0;t;t/=10)
            a[i++] = t%10;//把给的数给分解成一个数分别存到数组a中
        len = i;   //n的位数
        for(i = 1;i < n;++i)//从1*2*3*...*（n-1）
        {
            t = 0;//作为进位
            for(j = 0;j < len;j++)//每一位都需要i相乘
            {
                t=a[j]*i+t;
                a[j]=t%10;//保留余数
                t/=10;//作为进位
            }
            for(;t!=0;t/= 10)
                a[len++] = t%10;//最高位给分解为一位，当高位不止一位的进位时分解成一位，如108，要分解成1,0,8存到数组中
        }
        for(i = len - 1;i >= 0;i--)
            printf("%d",a[i]);//从高位输出即为所求数
        printf("\n");
    }
    return 0;
}
