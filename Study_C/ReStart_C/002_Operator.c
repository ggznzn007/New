#include <stdio.h>

void main()
{
	int num0 = 100;
	int num1 = 200;
	int num2 = 2;
	int result = 0;
	result = num0 + num1 / num2;
	printf_s("%d\n", result);

	int isTrue = (num0 == 100) && num1 == 50;
	if (isTrue == 1)
		puts("���Դϴ�.");
	else
		puts("�����Դϴ�.");

	return 0;

}