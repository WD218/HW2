#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x;
	int a, b,b1,b2, c,c1, d;
	printf("��J���u�N�X:");
	scanf_s("%d", &x);
	switch (x)
	{
	case 1:
		printf("¾�쬰�g�z���T�w�P�~�A�п�J���B�G");
			scanf_s("%d", &a);
			printf("�P�~��:%d\n", a);
		break;
	case 2:
		printf("¾�쬰���~�u�A�п�J���~�Τu�@�ɶ�");
		scanf_s("%d%d", &b1, &b2);
		if (b2 > 40)
			b = b1 * 40 + b1 * (b2 - 40)*1.5;
		else
			b = b1 * b2;
		printf("�P�~��:%d\n", b);
		break;
	case 3:
		printf("¾�쬰�q�T���A�п�J���P�P���B�G");
		scanf_s("%d", &c1);
		c = 250 + c1 * 0.057;
		printf("�P�~��:%d\n", c);
		break;
	case 4:
		printf("¾�쬰�p��u�A�п�J�P�~�G");
		scanf_s("%d", &d);
		printf("�P�~��:%d\n", d);
		break;

	}
}
