/*
���� ���
w : write ���ξ���
r : read �б�
a : append �߰��ϱ�

t : �ѱ�, ����(����� ����ϴ� ����(��))
b : ����, ����ü, �迭(�޸��� ��Ʈ/����Ʈ)

ex) at,wt,rt,ab,wb,rb ���·� ����
*/

#include <stdio.h>	

void main()
{
	//1)��Ʈ�� ����
	FILE* fp = NULL;
	fopen_s(&fp, "test.txt", "at");

	//2-1) ��������
	fputc('A', fp); fputc('\n', fp);
	fputc('B', fp); fputc('\n', fp);
	//2-2) ���ڿ� ����
	fputs("I Love You!\n", fp);
	fputs("ȣ�⵵\n", fp);
	fputs("�̲���\n", fp);
	fputs("�ڱ��\n", fp);




	//3)��Ʈ������
	fclose(fp);
}