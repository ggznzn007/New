//1. do~while���� �̿��ؼ� 1���� 100���� ����ϼ���
//for���� �̿��ؼ� 1���� 100���� ����ϼ���
#include <stdio.h>

void dowhile1(int i, int num)
{
	do
	{
		printf("%d \n", i);
		i++;
	} while (i <= num);
	return 0;
}

void for1(int i, int num)
{
	for (int i = 1; i <= num; i++)
	{
		printf("%d\n", i);
	}
}

void main()
{
	dowhile1(1, 100);
	for1(1, 100);
}