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

    int list[26];//��Ϯ��˳�򱣴�������߶�
    int dp[26];//dp[i]�����Ե�i��������β������������г���
    int main()
    {
        int n;
        while(scanf("%d",&n)!=EOF)
        {
            for(int i=1; i<=n; i++)
                scanf("%d",&list[i]);
            for(int i=1; i<=n; i++) //����Ϯ��ʱ��˳��ȷ��ÿһ��dp[i]
            {
                int tmax=1;//���ֵ�ĳ�ʼֵΪ1���������β��������������г�������Ϊ1
                for(int j=1; j<i; j++) //������ǰ���е����߶�
                {
                    if(list[j]>=list[i])//��j�ŵ������ȵ�ǰ������
                    {
                        tmax=max(tmax,dp[j]+1);//����ǰ������������j�ŵ�����β���������������֮�󣬼����䳤��dp[j]+1,�����ڵ�ǰֵ����������ֵ
                    }
                }
                dp[i]=tmax;//��dp[i]����Ϊ���ֵ
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
