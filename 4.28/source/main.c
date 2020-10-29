#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x;
	int a, b,b1,b2, c,c1, d;
	printf("輸入員工代碼:");
	scanf_s("%d", &x);
	switch (x)
	{
	case 1:
		printf("職位為經理為固定周薪，請輸入金額：");
			scanf_s("%d", &a);
			printf("周薪為:%d\n", a);
		break;
	case 2:
		printf("職位為時薪工，請輸入時薪及工作時間");
		scanf_s("%d%d", &b1, &b2);
		if (b2 > 40)
			b = b1 * 40 + b1 * (b2 - 40)*1.5;
		else
			b = b1 * b2;
		printf("周薪為:%d\n", b);
		break;
	case 3:
		printf("職位為通訊員，請輸入本周銷售額：");
		scanf_s("%d", &c1);
		c = 250 + c1 * 0.057;
		printf("周薪為:%d\n", c);
		break;
	case 4:
		printf("職位為計件工，請輸入周薪：");
		scanf_s("%d", &d);
		printf("周薪為:%d\n", d);
		break;

	}
}
