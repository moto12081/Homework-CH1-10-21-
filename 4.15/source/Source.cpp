#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double interest, rate;
	for (rate = 10; rate <= 12; rate += 0.5)
	{
		interest = 5000 * pow(1.0 + (rate / 100.0), 15);
		printf("投資5000元，如果利率是%.1f%%，15年後可以總共得到：%1.2f\n", rate, interest);
	}
	system("pause");
	return 0;
}