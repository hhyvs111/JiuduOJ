    #include<cstdio>
    #include<math.h>
    #define maxn 1000
    using namespace std;
    int main()
    {
        int a[maxn];
        int ans[maxn];
        int boss = 0;
        for(int i = 0;i < 256;i++)
        {
            int n = 0;
            int k = i*i;
            while(k)    //将数字放入数组
            {
                a[n] = k%10;
                k = k/10;
                n++;
            }
            if(n%2  == 0)    //偶位数
            {
                int cnt = 0;
                for(int j = 0;j < n;j++)    //如果相等则
                    if(a[j] == a[n-j-1])
                        cnt ++;
                    else
                        break;
                if(cnt == (n/2))
                    {
                        ans[boss] = i;
                        boss++;
                    }
            }
            else    //奇数
            {
                int cnt = 0;
                for(int j = 0;j < n && j!= n/2 ; j++)    //不用比较中间的那位数
                    if(a[j] == a[n-j-1])
                        cnt ++;
                    else
                        break;
                if( cnt == (n/2))
                    {
                        ans[boss] = i;
                        boss++;
                    }
            }

        }
        int p;
            for( p = 0;p < boss;p++)
                printf("%d\n",ans[p]);

        return 0;
    }
