#include <stdio.h>

void main()
{
	// 1) ��Ʈ�� ����
	FILE* fp = NULL;
	fopen_s(&fp, "test.txt", "rt");

	// 2) ���� �б�
	int ch = fgetc(fp);  printf("%c", ch);
	ch = fgetc(fp);  printf("%c", ch);
	ch = fgetc(fp);  printf("%c", ch);
	ch = fgetc(fp);  printf("%c", ch);

	// 3) ��Ʈ�� ����
	fclose(fp);
}