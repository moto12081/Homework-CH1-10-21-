#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	float a1=0; //本金
	float a2=0;//利息
	float a3=0;//貨款期限
	float a4=0;//利息費用



	while (a1 != -1)
	{
		printf("loan principal (-1 to end)：");			 //本金
		scanf_s("%f", &a1);
		if (a1 == -1)
		{
			return 0;
		}
		printf("lnterest rate：");			 //利息
		scanf_s("%f", &a2);
		if (a2 == -1)
		{
			return 0;
		}
		printf("term of the loan in days：");			 //天
		scanf_s("%f", &a3);
		if (a3 == -1)
		{
			return 0;
		}
		a4 = a1 * a2 * a3 / 365;
		printf("interest charge is $%.2f\n\n", a4);
	}


}