#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x;
	float a, b;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &x);
		if (x == -1)
			break;
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &a);
		if (x > 40)
			b = a * x + a * (x - 40) / 2;
		else
		{
			b = a * x;
		}
		printf("Salary is $%f\n", b);
	}
}