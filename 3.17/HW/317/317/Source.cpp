#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	int a1;		//��x��
	float a2;		//��l�l�B
	float a3;		//�ٴڪ����B
	float a4;     //���O�`�B
	float a5;     //�H���`�B
	printf("Account number(-1 to end) �G"); //�ĴX��
	scanf_s("%d", &a1);
	if ( a1 == -1)
	{
		return 0;
	}

	printf("Beginning balance�G");			 //��l���B
	scanf_s("%f", &a2);
 
	printf("total charges�G");					//�ٴڪ����B
	scanf_s("%f", &a3);

	printf("total credits�G");					//���O�`�B
	scanf_s("%f", &a4);

	printf("Credit limit�G");					//�H���`�B
	scanf_s("%f", &a5);

	printf("Account�G      %d\n", a1);
	printf("Credit limit�G %.2f\n", a5);
	printf("Balance�G      %.2f\n", a2);
	
	if (a4 <a5)
	{
		printf("Credit Limit Exceeded\n\n");
	}

	while (a1 !=-1)
	{
		printf("Account number(-1 to end) �G"); //�ĴX��
		scanf_s("%d", &a1);
		if (a1 == -1)
		{
			return 0;
		}

		printf("Beginning balance�G");			 //��l���B
		scanf_s("%f", &a2);

		printf("total charges�G");					//�ٴڪ����B
		scanf_s("%f", &a3);

		printf("total credits�G");					//���O�`�B
		scanf_s("%f", &a4);

		printf("Credit limit�G");					//�H���`�B
		scanf_s("%f", &a5);
		printf("\n");

	}
}
