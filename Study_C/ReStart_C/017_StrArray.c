/* 3���� �л��� �̸��� ���������� �Է¹ް�
������ ���
�� �л� �̸��� ������ ����ϼ���
*/
#include "turboc.h"

#define ST_NUM 100

void main()
{
	int kor[ST_NUM] = { 0 };
	int sum = 0;
	double avg = 0.0;
	// char[20]�迭�� 3�� �ִ�1
	char names[3][20] = { 0 };
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		printf("�̸� �Է� >> ");
		fgets(names[i], sizeof(names[i]) - 1, stdin);
		names[i][strlen(names[i]) - 1] = 0;
	}
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d��° �л� �̸��� %s �Դϴ�\n", i + 1, names[i]);
	}
	printf("\n");
	for (int i = 0; i < sizeof(kor) / sizeof(kor[0]); i++)
	{
		kor[i] = (100);
		sum += kor[i];

		printf("%02d\t", kor[i]);
		if (i % 10 == 9)
			printf("\n");
	}
	printf("\n");

	avg = (double)sum / ST_NUM;

	printf("������ %d�Դϴ�\n", sum);
	printf("����� %.2lf�Դϴ�\n", avg);
}