/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c, d, e, totalmoney;

	printf("Total miles driven per day:");
	scanf("%f", &a);
	printf("Cost per gallon of gasolline:");
	scanf("%f", &b);
	printf("Average miles per gallon:");
	scanf("%f", &c);
	printf("Parking fees per day:");
	scanf("%f", &d);
	printf("Tolls per day:");
	scanf("%f", &e);

	totalmoney = (a / c)*b + d + e;
	printf("%f", totalmoney);
	return 0;
}