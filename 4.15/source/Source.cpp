#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double interest, rate;
	for (rate = 10; rate <= 12; rate += 0.5)
	{
		interest = 5000 * pow(1.0 + (rate / 100.0), 15);
		printf("���5000���A�p�G�Q�v�O%.1f%%�A15�~��i�H�`�@�o��G%1.2f\n", rate, interest);
	}
	system("pause");
	return 0;
}