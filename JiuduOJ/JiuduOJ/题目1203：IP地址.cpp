#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;


int is_legal(char str[])
{
//	printf("%s",str); 
	int len = strlen(str);
	int sum = 0;
	int bei = 1;
	for(int i = len - 1;i >= 0;i--)
	{
		if(str[i] == '.')
		{
			sum = 0;
			bei = 1;
		}
		else
		{
			int num = str[i] - '0';
			sum += num * bei;
			bei *= 10;
//			printf("%d\n",sum);
			if(sum > 255)
				return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	while(scanf("%d",&n) == 1)
	{
		char str[20];
		for(int i = 0;i < n;i++)
		{
			scanf("%s",str);
			if(is_legal(str))
				printf("Yes!\n");
			else
				printf("No!\n");
			memset(str,0,sizeof(str));
		}
		
	}
	return 0;
 } 
