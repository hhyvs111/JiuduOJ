#include<cstdio>
#include<string.h>
#include<cstdlib>
#include<iostream>
#include<algorithm>
using namespace std;
typedef struct student    //定义一个结构体
{
    int age;
    int score;
    char name[102];
};
int main()
{
    int n;
    student a[1002];
    while(scanf("%d",&n)==1)
    {
        for(int i = 0;i < n;i++)
        {
            scanf("%s %d %d",a[i].name,&a[i].age,&a[i].score);
        }
        student temp;
        for(int j=0;j<n;j++)   //冒泡排序
        for(int i=0;i<n-1-j;i++)
        {
            if(a[i].score>a[i+1].score)
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
            else if(a[i].score==a[i+1].score)
            {
                if(strcmp(a[i].name,a[i+1].name)>0)
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
                else if(strcmp(a[i].name,a[i+1].name)==0)
                {
                    if(a[i].age>a[i+1].age)
                    {
                        temp=a[i];
                        a[i]=a[i+1];
                        a[i+1]=temp;
                    }
                }


            }
        }

        for(int i = 0;i < n;i++)
            printf("%s %d %d\n",a[i].name,a[i].age,a[i].score);
    }
    return 0;
}
