#include<cstdio>
#include<cmath>
#include<cstring>
#define maxn 10000
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n) == 1)
    {
        int a[maxn];
        memset(a,0,sizeof(a));
        for(int i = 0;i < n;i++)
        {
            scanf("%d",&a[i]);
        }
        int d;
        scanf("%d",&d);
        int begin = pow(2,d-1);  //树的开始
        int end = pow(2,d);   // 层次结点的结束
//        printf("%d %d\n",begin,end);
        int max_d = 1;
        int n1 = n;
        while(n1-1)   //求二叉树的最大高度
        {
            max_d ++;
            n1 /= 2;
        }
        if(d > max_d)
            printf("EMPTY\n");
        else
        {
        int num;
//        printf("%d",max_d);
        if( d == max_d)   //判断d是那一层，如果是底层则num等于N
            num = n;
        else
            num = end-1;
        int i;
        for(i = begin-1 ; i < num-1;i++)
            printf("%d ",a[i]);
        printf("%d\n",a[i]);
        }
    }
    return 0;
}
