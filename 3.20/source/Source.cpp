#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a1 = 0; //�u�@�ɼ�
	float a2 = 0; //���~�O��
	float a3 = 0; //�~��
	while (a1 != -1)
	{
		printf("# of hours worked(-1 to end)�G");
		scanf_s("%f", &a1);
		if (a1==-1)
		{
			return 0;
		}
		printf("hourly rate of the worker($00.00)�G");
		scanf_s("%f", &a2);
		if (a2 == -1)
		{
			return 0;
		}
		a3 = a1 * a2;

		printf("Salary is $%.2f\n\n", a3);
	}



}