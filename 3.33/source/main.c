#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j< 12; j++)
		{
			if ((j == 0) || (j == 11))
				printf("+");
			
			else if(i==0)
				printf("+");
			else if(i==2)
				printf("+");
			else
				printf(" ");
		}
		printf("\n");
	}
}