
#include <stdio.h>

int sumf(int a, int b)
{
	return a + b;
}

int minusf(int a, int b)
{
	return a - b;
}

void main()
{
	int a = 10;
	int b = 20;
	int sum_res = 0;
	int minus_res = 0;
	sum_res = sumf(a, b);
	minus_res = minusf(b, a);
	printf("���� ���� %d�̰� �� ���� %d�Դϴ�.\n", sum_res, minus_res);
}

