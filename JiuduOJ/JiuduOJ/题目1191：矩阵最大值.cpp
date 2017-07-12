#include<cstdio>
#define maxn 100
using namespace std;
int main()
{
    int n,m;
    while(scanf("%d %d",&m,&n) == 2)
    {
        int arr[m][n];
        for(int i = 0;i < m;i++)
            for(int j = 0;j < n;j++)
                scanf("%d",&arr[i][j]);
        for(int i = 0; i < m;i++)
        {
            int sum = 0;
            int max = arr[i][0];
            int max_pos = 0;
            for(int j = 0; j < n;j++)
            {
                sum += arr[i][j];
                if(arr[i][j] > max)
                {
                    max = arr[i][j];
                    max_pos = j;
                }

            }
            arr[i][max_pos] = sum;
        }
        int i,j;
        for( i = 0;i < m;i++)
        {
            for( j = 0; j < n-1;j++)
                printf("%d ",arr[i][j]);
                printf("%d\n",arr[i][j]);
        }
    }
    return 0;
}
