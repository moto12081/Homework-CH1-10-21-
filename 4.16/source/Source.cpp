#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a1;
	int a2;
	int a3;

	printf("(A)\n");
	for (int i = 1; i <= 10; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("(B)\n");
	for (int i = 10; i >= 1; --i)
	{
		for (int j = 1; j <= i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(C)\n");

	for (int i = 10; i >= 1; i--)
	{
		for (int k = 10 - i; k > 0; k--)
		{
			printf(" ");
		}
		for (int j = i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("(D)\n");

	for (int i = 1; i <= 10 ; i++)
	{
		for (int k = 10-i; k > 0; k--)
		{
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	/*
	printf("(A)\n");
	for (int i = 1; i <= 10; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("(B)\n");

	for (int i = 10; i >= 1; --i)
	{
		for (int j = 1; j <= i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(C)\n");

	for (int i = 10; i >= 1; i--)
	{
		for (int k = 10 - i; k > 0; k--)
		{
			printf(" ");
		}
		for (int j = i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("(D)\n");

	for (int i = 1; i <= 10 ; i++)
	{
		for (int k = 10-i; k > 0; k--)
		{
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	*/
	return 0;


}