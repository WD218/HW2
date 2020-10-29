#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float x,y;
	int a;
	printf("輸入本金:");
		scanf_s("%f", &x);
		printf("輸入期數:");
		scanf_s("%d", &a);
		y = x;
		for (float i = 1.1; i < 1.121; i = i + 0.005)
		{
			x = y;
			for (int j = 0; j < a; j++)
			{
				x = x * i;
			}
			printf("%f\n", x);
		}
}