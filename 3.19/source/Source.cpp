#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	float a1=0; //����
	float a2=0;//�Q��
	float a3=0;//�f�ڴ���
	float a4=0;//�Q���O��



	while (a1 != -1)
	{
		printf("loan principal (-1 to end)�G");			 //����
		scanf_s("%f", &a1);
		if (a1 == -1)
		{
			return 0;
		}
		printf("lnterest rate�G");			 //�Q��
		scanf_s("%f", &a2);
		if (a2 == -1)
		{
			return 0;
		}
		printf("term of the loan in days�G");			 //��
		scanf_s("%f", &a3);
		if (a3 == -1)
		{
			return 0;
		}
		a4 = a1 * a2 * a3 / 365;
		printf("interest charge is $%.2f\n\n", a4);
	}


}