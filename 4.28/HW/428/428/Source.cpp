#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	int a1=0;
	int a2 = 0;
	int a3 = 0;
	int a4 = 0;
	int b1 = 0;
	int b2 = 0;
	int b3 = 0;
	float c1 = 0;
	float c2 = 0;
	float c3 = 0;
	printf("�п�J�A���Ҧ�1=�g�z   2=�p�ɤu  3=�Ī��u�H  4=�p���");
	scanf_s("%d",&a1);
	
	if (a1==1) //�g�z
	{
		printf("�A���Ҧ��O�g�z\n");

		printf("�A�O�T�w�u��\n");
	}
	if (a1 == 2)//�p�ɤu
	{
		printf("�A���Ҧ��O�p�ɤu\n");
		printf("�аݧA�u�ɴX�p��?");
		scanf_s("%d", &a2);
		printf("�аݧA���򥻮��~?");
		scanf_s("%d", &a3);
		a4 = a2 * a3;
		printf("�A���u��=%d\n", a4);

	}
	if (a1 == 3)//�Ī��u�H
	{
		printf("�A���Ҧ��O�Ī��u�H\n");
		printf("�A���u��h��?");
		scanf_s("%f", &c1);
		c2 = c1 * 0.057 ;
		c3 = c2 + c1 + 250;
	     printf("�A���u��=%.2f\n", c3);
	}
	if (a1 == 4)//�p��u�@
	{
		printf("�A���Ҧ��O�p��u�@\n");
		printf("�аݧA�p��X��?");
		scanf_s("%d", &b1);
		printf("�аݭp��1��O�h��?");
		scanf_s("%d", &b2);
		b3 = b1 * b2;
		printf("�A���u��=%d\n", b3);

	}
	return 0;
}