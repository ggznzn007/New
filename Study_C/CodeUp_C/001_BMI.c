#include <stdio.h>

void main()
{

	printf("BMI�� �Է����ּ��� >> ");
	int bmi;
	scanf_s("%d", &bmi);

	if (bmi <= 10)
		printf("����ü�� �Դϴ�. \n");
	else if (bmi <= 20)
		printf("��ü���Դϴ�.\n");
	else
		printf("���Դϴ�.\n");

	return 0;
}