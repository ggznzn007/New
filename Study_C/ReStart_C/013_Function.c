// �Լ��� ���
//����Ÿ�� �Լ���(�Ű�����)
//{������ ����
//return ����Ÿ�Ժ���;
//}������ ��
//<�Լ��� ������ �� ������� �ϴ� ��>
//1. �Լ���		- ������ ����
//2. ���μ���	- ������ ����
//3. �Ű�����	- ��ȭ = ��������
//4. ���ϰ�		- ��ȭ

#include <stdio.h>

int getNum()
{
	int num = 0;
	printf("���� �Է� : ");
	scanf_s("%d", &num);
	return num;
}

int add(int num0, int num1)
{
	return num0 + num1;
}

void viewResult(int result)
{
	
	printf("��� ����� %d �Դϴ�.\n", result);
}

void viewTitle()
{
	printf("********���� �����Դϴ� ************\n");
}

void main()
{
	viewTitle();
	int num0 = getNum();
	int num1 = getNum();
	
}