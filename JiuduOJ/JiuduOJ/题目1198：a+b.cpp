#include<cstdio>
#include<cstring>
using namespace std;

char a[1000],b[1000];
int c[1000];
int main()
{
    while(~scanf("%s %s",a,b))
    {
        int len_a = strlen(a);
        int len_b = strlen(b);
        int i,j;
        int temp ;
        int carr = len = 0;
        for(i = len_a-1,j = len_b-1;i >= 0 && j >= 0;j--,i--)
        {
            temp = a[i] - '0' + b[j] - '0' + carr;
            c[len] = temp % 10;
            carr = temp / 10;    //ำเสý
            len++;
        }
    }
}
