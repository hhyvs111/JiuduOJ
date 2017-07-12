    #include<iostream>
    #include<stdio.h>
    #include<queue>
    #include<string>
    #include<string.h>
    #include<algorithm>
    using namespace std;


    int max(int a,int b)
    {
        return a>b?a:b;
    }

    int list[26];//按袭击顺序保存各导弹高度
    int dp[26];//dp[i]保存以第i个导弹结尾的最长不增子序列长度
    int main()
    {
        int n;
        while(scanf("%d",&n)!=EOF)
        {
            for(int i=1; i<=n; i++)
                scanf("%d",&list[i]);
            for(int i=1; i<=n; i++) //按照袭击时间顺序确定每一个dp[i]
            {
                int tmax=1;//最大值的初始值为1，即以其结尾的最长不递增子序列长度至少为1
                for(int j=1; j<i; j++) //遍历其前所有导弹高度
                {
                    if(list[j]>=list[i])//若j号导弹不比当前导弹低
                    {
                        tmax=max(tmax,dp[j]+1);//将当前导弹排列在以j号导弹结尾的最长不递增子序列之后，计算其长度dp[j]+1,若大于当前值，则更新最大值
                    }
                }
                dp[i]=tmax;//将dp[i]保存为最大值
            }
            int ans=1;
            for(int i=1; i<=n; i++)
            {
                ans=max(ans,dp[i]);
            }
            printf("%d\n",ans);
        }
        return 0;
    }
