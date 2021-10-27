#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, test1, test2;

	test1 = 5;
	test2 = test1 - 1;
	for (i = 1; i <= test1; i++)
	{
		for (j = 1; j <= test2; j++)
		{
			printf(" ");
		}
		test2--;
		for (j = 1; j <= (2 * i - 1); j++)
		{
		 printf("*");
		}
		printf("\n");
	}

	//---------------------------------------------------上面
	//---------------------------------------------------下面
	test2 = 1;
	for (i = 1; i <= (test1 - 1); i++)
	{
		for (j = 1; j <= test2; j++)
		{
			printf(" ");
		}
		test2++;
		for (j = 1; j <= (2 * (test1 - i) - 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}