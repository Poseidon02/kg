#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	scanf("%d%d", &a, &b);
	if (a%b == 0)
	{
		printf("%d is a multiple of %d", a, b);
	}
	else if (a%b != 0)
	{
		printf("%d is not a multiple of %d", a, b);
	}
	system("pause");
	return 0;
}