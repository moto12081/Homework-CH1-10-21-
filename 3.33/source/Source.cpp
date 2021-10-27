#include<stdio.h>

int main()
{
	int i, j, a1, a2;

	printf("ªø«×¡G");
	scanf_s("%d", &a1);

	printf("¼e«×¡G");
	scanf_s("%d", &a2);

	for (i = 0; i < a1; i++)
	{
		for (j = 0; j < a2; j++)
		{
			if (i == 0 || i == a1 - 1   ||		j == 0 || j == a2 - 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}