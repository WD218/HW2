#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("(1)\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
	printf("(2)\n");
		for (int i = 0; i < 10; i++)
		{
			for (int j = i; j < 10; j++)
				printf("*");
			printf("\n");
		}
		printf("(3)\n");
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < i; j++)
				printf(" ");
			for (int j = i; j < 10; j++)
				printf("*");
			printf("\n");
		}
		printf("(4)\n");
		for (int i = 0; i < 10; i++)
		{
			for (int j = i; j < 9; j++)
				printf(" ");
			for (int j = 0; j <= i; j++)
				printf("*");
			printf("\n");
		}
}