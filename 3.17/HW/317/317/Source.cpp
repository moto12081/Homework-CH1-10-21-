#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	int a1;		//第x位
	float a2;		//初始餘額
	float a3;		//還款的金額
	float a4;     //消費總額
	float a5;     //信用總額
	printf("Account number(-1 to end) ："); //第幾位
	scanf_s("%d", &a1);
	if ( a1 == -1)
	{
		return 0;
	}

	printf("Beginning balance：");			 //初始金額
	scanf_s("%f", &a2);
 
	printf("total charges：");					//還款的金額
	scanf_s("%f", &a3);

	printf("total credits：");					//消費總額
	scanf_s("%f", &a4);

	printf("Credit limit：");					//信用總額
	scanf_s("%f", &a5);

	printf("Account：      %d\n", a1);
	printf("Credit limit： %.2f\n", a5);
	printf("Balance：      %.2f\n", a2);
	
	if (a4 <a5)
	{
		printf("Credit Limit Exceeded\n\n");
	}

	while (a1 !=-1)
	{
		printf("Account number(-1 to end) ："); //第幾位
		scanf_s("%d", &a1);
		if (a1 == -1)
		{
			return 0;
		}

		printf("Beginning balance：");			 //初始金額
		scanf_s("%f", &a2);

		printf("total charges：");					//還款的金額
		scanf_s("%f", &a3);

		printf("total credits：");					//消費總額
		scanf_s("%f", &a4);

		printf("Credit limit：");					//信用總額
		scanf_s("%f", &a5);
		printf("\n");

	}
}
