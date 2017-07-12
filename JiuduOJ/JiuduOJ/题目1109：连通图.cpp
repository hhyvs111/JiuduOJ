#include <iostream>
#include <cstring>
using namespace std;

#define MAXN 1010

int map[MAXN][MAXN];
bool visit[MAXN];
int n,m;

void DFS(int i){
    visit[i] = 1;        //���ʵ�i�����
    for(int j=1;j<=n;j++){
        if(!visit[j] && map[i][j] && j!=i){      //����δ���ʵĽ�㣬��map���еģ����Ҳ�����i
            DFS(j);
        }
    }
}

int main(){
    int a,b;
    while(cin>>n>>m){
        if(n == 0)
            break;
        memset(map,0,sizeof(map));       //ȫ��Ϊ0
        memset(visit,0,sizeof(visit));
        for(int i=0;i<m;i++){
            cin>>a>>b;
            map[a][b] = map[b][a] = 1;    //����ͼ����һ��
        }
        int count = 0;
        for(int i=1;i<=n;i++){     //����
            if(!visit[i]){         //û�з���
                count ++;           //����=1
                DFS(i);             //�����ݹ���ʣ���������ֽ����˾��е���ʲ���, �������ͨ��һ��һ��ͷ��ʵ���
            }
            if(count == 2)          //��һ������ʲ���ֱ����������NO
                break;
        }
        if(count == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

//else
//        {
//            for(int i = 0;i <= n;i++)    //��������Ϊ0
//            for(int j = 0;j <= n;j++)
//                Mat[i][j] = 0;
//            while(m--)
//            {
//                int tou,wei;
//                scanf("%d %d",&tou,&wei);
//                    Mat[tou][wei]++;
//            }
//            int cnt = 0;
//            for(int i = 1;i <= n;i++)        //�жϵ�N�е�N�е�ʮ������û�����������һ��ʮ����û�������ǲ���ͨ�ģ�
//            {
//                for(int j = 1;j <= n;j++)
//                    {
//                       if(Mat[i][j] > 0 || Mat[j][i] > 0)
//                       {
//                           cnt++;
//                           break;
//                       }
//                    }
//            }
//            if(cnt >= n)
//                printf("YES\n");
//            else
//                printf("NO\n");
//        }
//
//
//    }
