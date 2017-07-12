#include<cstdio>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int a[30];
        int bag = 0;
        for(int i = 0;i < n;i++)
            scanf("%d",&a[i]);
        int cnt = 0;
        for(int i = 0;i < n;i++)
        {
            bag += a[i];
            if(bag == 40)
            {
                cnt++;
                bag = 0;
                continue;
            }
            for(int j = 0;j < n && j!=i;j++)
            {
                bag += a[j];
                if(bag == 40)
                {
                    cnt++;
                    bag = 0;
                    break;
                }
                else if(bag > 40)
                {
                    bag -= a[i];   //大于就把物品丢了
                    continue;
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
