#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main(void)
{
	int a, b, c = 0;
	int test = 500;
	int m = 2;
	while (c < test) 
	{
		for (int n = 1; n < m; n++) 
		{
			a = pow (m ,  2) -  pow( n ,  2);
			b = 2 * m * n;
			c = pow(m, 2) + pow(n, 2);
			if (c > test)
			{
				return 0;
			}

			printf("%d %d %d\n", a, b, c);
		}
		m++;
	}
}
