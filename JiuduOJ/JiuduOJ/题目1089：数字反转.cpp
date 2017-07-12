#include<cstdio>
#include<math.h>
#include<cstdlib>
#define maxn 10000
using namespace std;

int weishu(int n)
{
    int i=0;
    while(n)
    {
        i++;
        n/= 10;
    }
    return i;
}

int ten(int n)
{
    int ten=1;
    while(n--)
    {
        ten*=10;
    }
    return ten;
}
int main()
{
    int n;
//    char a[maxn],b[maxn],c[maxn];
    scanf("%d",&n);
    while(n--)
    {
      int a,b;
      scanf("%d %d",&a,&b);
      int c = a+b;
      int c2 = c;
      int f_a=0,f_b=0,f_c=0;
      int wei_a = weishu(a);
      int wei_b = weishu(b);
      int wei_c = weishu(c);
      int num_a = ten(wei_a);
      int num_b = ten(wei_b);
      int num_c = ten(wei_c);

      //printf("%d %d\n",num_a,num_b);
      while(a)
      {
          num_a /= 10;
          f_a += (a%10)*num_a;
          a /= 10;
      }
      while(b)
      {
          num_b /= 10;
          f_b += (b%10)*num_b;
          b /= 10;
      }
      while(c)
      {
          num_c /= 10;
          f_c += (c%10)*num_c;
          c /= 10;
      }
      int c1 = f_a+f_b;
      if(c1==f_c)
        printf("%d\n",c2);
      else
        printf("NO\n");
      //printf("%d %d\n",f_a,f_b);
    }
    return 0;
}
//
//        scanf("%s %s",a,b);
//        int aa = atoi(a);  //atoi字符串转换成数字，atof转换成浮点数
//        int bb = atoi(b);
//        int cc = aa+bb;   //2个数的和
//        int j =0;
//        while(cc)
//        {
//            c[j] = cc%10 + '0';   //将数字转换成字符串
//            cc/=10;
//            j++;
//        }
//       printf("%s\n",c);     //  两个数的和的反转
//        int len1 = strlen(a);
//        int len2 = strlen(b);
//        for(int i = 0;i<len1/2;i++)
//            {
//                char temp = a[i];
//                a[i] = a[len1-1];
//                a[len1-1] = temp;
//            }
//        for(int i = 0;i<len2/2;i++)
//           {
//                char temp = b[i];
//                b[i] = b[len1-1];
//                b[len1-1] = temp;
//           }
//        int aaa = atoi(a);
//        int bbb = atoi(b);
//        int ccc = aaa+bbb;
//        printf("%d %d %d\n",aaa,bbb,ccc);
//        printf("%d\n",atoi(c));
//        if(atoi(c) == ccc)    //如果相等将字符串反序输出就是a+b的值
//        {
//            for(int i = strlen(c)-1 ;i>=0;i--)
//                printf("%c",c[i]);
//        }
//        else
//            printf("NO");
//        printf("\n");
