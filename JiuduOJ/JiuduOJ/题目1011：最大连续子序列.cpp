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
        tmp = iMax = arr[0];   //ȡ���ֵ��tempΪ��һ��ֵ
        for(i = 1; i < n; ++i)
        {
            scanf("%d", &arr[i]);
            if(tmp >= 0)      //ǰ��ĺ�Ϊ��������ܳ�������������У����Լ����ۼ�
                tmp += arr[i], qe = i;
            else               //��Ϊ������ǰ����������������ӱ�Ԫ�ؿ�ʼ����ȷ������
                tmp = arr[i], qs = qe = i;
            if(iMax < tmp)          //������кͱ�max��ͼ�¼
                iMax = tmp, iStartPos = qs, iEndPos = qe;
        }
        if(iMax < 0)
            iStartPos = 0, iEndPos = n-1, iMax = 0;
        printf("%d %d %d\n", iMax, arr[iStartPos], arr[iEndPos]);
    }
    return 0;
}
