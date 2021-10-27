#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a1 = 0; //工作時數
	float a2 = 0; //時薪費用
	float a3 = 0; //薪水
	while (a1 != -1)
	{
		printf("# of hours worked(-1 to end)：");
		scanf_s("%f", &a1);
		if (a1==-1)
		{
			return 0;
		}
		printf("hourly rate of the worker($00.00)：");
		scanf_s("%f", &a2);
		if (a2 == -1)
		{
			return 0;
		}
		a3 = a1 * a2;

		printf("Salary is $%.2f\n\n", a3);
	}



}