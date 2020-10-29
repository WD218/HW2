#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float b, c, d, e;
	int	a=0;
	while (a!=-1)
	{
		printf("Enter account number (-1 to end):");
		scanf_s("%d", &a);
		if (a == -1)
			break;
		printf("Entre beginning balance:");
		scanf_s("%f", &b);
		printf("Enter total charges:");
		scanf_s("%f", &c);
		printf("Enter total credits:");
		scanf_s("%f", &d);
		printf("Enter credit limit:");
		scanf_s("%f", &e);
		if ((b + d) > e)
		{
			printf("Account:%d\n", a);
			printf("Credit limit%f\n", e);
			printf("Balance:%f\n",b+d );
			printf("Credit Limit Exceeded\n");
		}
	}
}