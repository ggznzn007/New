//4. do~while���� �̿��ؼ� 1���� 10���� �߿� ¦���� ����ϼ���
//do~while������ ���ǹ��� �־��ָ� ��
//¦�� ���� if (num % 2 == 0)
#include <stdio.h>

void dowhile3(int num, int goal)
{
	do
	{
		num++;
		if (num % 2 == 0)
			printf("\n%d\n", num);
		if (num == goal)
			break;
	} while (1);
}

void main()
{
	dowhile3(1, 10);
}