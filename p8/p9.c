#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//判断i是否为素数
int main()
{
	int i = 0;
	int count = 0;
	////for (i = 100; i <= 200; i++)
	for (i = 1; i <= 20; i+=2)
	{
		int j;
		//for (j = 2; j < i; j++)
		for (j = 2; j <= sqrt(i); j++)//sqrt开平方
		{
			if (i % j == 0)
			{
				break;
			}
		}
		//if (i == j)
		if(j>sqrt(i))
		{
			count++;
			printf("%d\n", i);
		}
	}
	printf("count=%d\n", count);	//count = 21

	return 0;
}