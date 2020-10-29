#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	for (int x = 1; x <= 500; x++)
	{
		for (int y = 1; y <= 500; y++)
		{
			for (int z = 1; z <= 500; z++)
			{
				if (x*x + y * y == z * z)
					printf("%d , %d , %d\n", x, y, z);
			}
		}
	}
}