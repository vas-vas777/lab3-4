#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main()
{
	int k;
	const double pi=3.14159;
        double sum,n,z;
	
	k = 0; sum = 0; n = 1;
	z = pow(pi, 2.) / 6.;
	
	do
	{
		sum = 1. / pow(n, 2.) + sum;
		n++;
		k += 1;
	} while (sum <= z);
	
	printf("sum=%f k=%d z=%f ",sum,k,z);
	_getch();
}

