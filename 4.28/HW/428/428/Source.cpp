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
	printf("請輸入你的模式1=經理   2=小時工  3=傭金工人  4=計件員");
	scanf_s("%d",&a1);
	
	if (a1==1) //經理
	{
		printf("你的模式是經理\n");

		printf("你是固定工資\n");
	}
	if (a1 == 2)//小時工
	{
		printf("你的模式是小時工\n");
		printf("請問你工時幾小時?");
		scanf_s("%d", &a2);
		printf("請問你的基本時薪?");
		scanf_s("%d", &a3);
		a4 = a2 * a3;
		printf("你的工資=%d\n", a4);

	}
	if (a1 == 3)//傭金工人
	{
		printf("你的模式是傭金工人\n");
		printf("你的工資多少?");
		scanf_s("%f", &c1);
		c2 = c1 * 0.057 ;
		c3 = c2 + c1 + 250;
	     printf("你的工資=%.2f\n", c3);
	}
	if (a1 == 4)//計件工作
	{
		printf("你的模式是計件工作\n");
		printf("請問你計件幾件?");
		scanf_s("%d", &b1);
		printf("請問計件1件是多少?");
		scanf_s("%d", &b2);
		b3 = b1 * b2;
		printf("你的工資=%d\n", b3);

	}
	return 0;
}