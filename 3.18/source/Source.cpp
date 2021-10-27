#include <stdio.h>

#include <stdlib.h>


int main(void)
{
	float a1;
	float a2;


	printf("Enter sales in dollars (-1 to end)¡G");
	scanf_s("%f", &a1);
	a2 = 0.09*a1 + 200;
	printf("Salary is ¡G%.2f\n", a2);

	while (a1 != -1)
	{
		printf("Enter sales in dollars (-1 to end)¡G");
		scanf_s("%f", &a1);
		a2 = 0.09*a1 + 200;
		if (a1 != -1)
		{
			printf("Salary is ¡G%.2f\n", a2);
		}

	}
}