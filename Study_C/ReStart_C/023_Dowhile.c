//5. do~while���� �̿��ؼ� ���� ������ �Է¹ް� �� ����ŭ "�����մϴ�"�� ����ϼ���
//for���� �̿��ؼ� ���� ������ �Է¹ް� �� ����ŭ "�����մϴ�"�� ����ϼ���

#include <stdio.h>



int for4()
{
	while (1)
	{
		printf("\n");
		int i, num;
		printf("���� ������ �Է��ϼ��� >> ");
		scanf_s("%d", &num);
		for (i = 1; i <= num; i++)
		{
			printf("\n����մϴ�.\n");
		}

	}
	return 0;
}

void main()
{
	for4();
}