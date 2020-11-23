#include "turboc.h"	

enum
{
	INPUT_ADDR = 1,
	SEARCH_ADDR,
	UPDATE_ADDR,
	DELETE_ADDR,
	PRINTALL_ADDR,
	EXIT_ADDR
};

void viewMenu()
{
	printf("\t<�ּҷ� ���� ���α׷�>\n");
	printf("1. �Է�\n");
	printf("2. �˻�\n");
	printf("3. ����\n");
	printf("4. ����\n");
	printf("5. ��ü���\n");
	printf("6. ����\n");
}

int getSelNum()
{
	int selNum = 0;
	printf("\n��ȣ�� �����ϼ��� >> ");
	scanf_s("%d", &selNum);

	return selNum;
}


void inputAddress()
{
	printf("�Է�ó���Ϸ�!!!\n");
}

void searchAddress()
{
	printf("�˻��Ϸ�!!!\n");
}

void updateAddress()
{
	printf("������Ʈ�Ϸ�!!!\n");
}

void deleteAddress()
{
	printf("�����Ϸ�!!!\n	");
}

void printAllAddress()
{
	printf("��ü����մϴ�!!!\n");
}

void exitApp()
{
	printf("���α׷��� �����մϴ�\n");
	exit(0);
}

int processWork(int selNum)
{
	int ret = 1;

	switch (selNum)
	{
	case INPUT_ADDR:
		inputAddress();
		break;
	case SEARCH_ADDR:
		searchAddress();
		break;
	case UPDATE_ADDR:
		updateAddress();
		break;
	case DELETE_ADDR:
		deleteAddress();
		break;
	case PRINTALL_ADDR:
		printAllAddress();
		break;
	case EXIT_ADDR:
		ret = 0;
		break;
	default:
		printf("�߸� �Է��߽��ϴ�. �ٽ� �Է����ּ���!\n");
		break;
	}
	return ret;
}

void laterProcess()
{
	_getch();// scanf_s���� �Էµ� ���� ó��
	_getch();// �ƹ� �Է�(ȭ�� ��� ����)
	clrscr();// ȭ�� û��
}

void main()
{
	int selNum = 0;
	int isRun = 1;
	while (isRun)
	{
		viewMenu();// �޴������ֱ�
		selNum = getSelNum(); //����� �Է�
		isRun = processWork(selNum); //ó��
		laterProcess(); //��ó��
	}
}