#include <cstdio>
#include <iostream>
#include <cstring>
#include <climits>

using namespace std;

const int MAXN = 10000;

int main()
{
    int iMax, iStartPos, iEndPos, qs, qe, arr[MAXN], tmp, n, i;
    while(scanf("%d", &n) && n)
    {
        iStartPos = iEndPos = qs = qe = 0;
        scanf("%d", &arr[0]);
        tmp = iMax = arr[0];   //取最大值和temp为第一个值
        for(i = 1; i < n; ++i)
        {
            scanf("%d", &arr[i]);
            if(tmp >= 0)      //前面的和为正，则可能出现在最大序列中，所以继续累加
                tmp += arr[i], qe = i;
            else               //和为负，则前面的序列舍弃掉，从本元素开始重新确定序列
                tmp = arr[i], qs = qe = i;
            if(iMax < tmp)          //如果序列和比max大就记录
                iMax = tmp, iStartPos = qs, iEndPos = qe;
        }
        if(iMax < 0)
            iStartPos = 0, iEndPos = n-1, iMax = 0;
        printf("%d %d %d\n", iMax, arr[iStartPos], arr[iEndPos]);
    }
    return 0;
}
