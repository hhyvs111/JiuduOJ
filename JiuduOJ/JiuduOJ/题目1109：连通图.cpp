#include <iostream>
#include <cstring>
using namespace std;

#define MAXN 1010

int map[MAXN][MAXN];
bool visit[MAXN];
int n,m;

void DFS(int i){
    visit[i] = 1;        //访问第i个结点
    for(int j=1;j<=n;j++){
        if(!visit[j] && map[i][j] && j!=i){      //遍历未访问的结点，且map里有的，而且不访问i
            DFS(j);
        }
    }
}

int main(){
    int a,b;
    while(cin>>n>>m){
        if(n == 0)
            break;
        memset(map,0,sizeof(map));       //全置为0
        memset(visit,0,sizeof(visit));
        for(int i=0;i<m;i++){
            cin>>a>>b;
            map[a][b] = map[b][a] = 1;    //无向图，都一样
        }
        int count = 0;
        for(int i=1;i<=n;i++){     //遍历
            if(!visit[i]){         //没有访问
                count ++;           //计数=1
                DFS(i);             //进入后递归访问，如果出来又进来了就有点访问不到, 如果是联通的一般一遍就访问到了
            }
            if(count == 2)          //有一个点访问不到直接跳出输入NO
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
//            for(int i = 0;i <= n;i++)    //将矩阵置为0
//            for(int j = 0;j <= n;j++)
//                Mat[i][j] = 0;
//            while(m--)
//            {
//                int tou,wei;
//                scanf("%d %d",&tou,&wei);
//                    Mat[tou][wei]++;
//            }
//            int cnt = 0;
//            for(int i = 1;i <= n;i++)        //判断第N行第N列的十字上有没有数！如果有一个十字上没有数就是不联通的！
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
