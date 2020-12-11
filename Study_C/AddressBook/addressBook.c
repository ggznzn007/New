#include "turboc.h"

#define ADR_NUM 100

// ���� ��� �ǹ��ִ� ���ڸ� ���
// ó�� ���� �������ʹ� �ڵ����� 1�� ����
enum
{
	INPUT_ADR = 1,
	SEARCH_ADR,
	UPDATE_ADR,
	DELETE_ADR,
	PRINTALL_ADR,
	EXIT_ADR
};

typedef struct _AddressBook
{
	char name[20];
	char address[30];
	int age;
	int phone;
	float height;
	float weight;
}AddressBook;

AddressBook addressBook[ADR_NUM];// �ּҷ� ���� ���� �迭
int g_nAdrCnt = 0;// ���� �ο���/ ���� ���� ��ġ

//�Լ� ���� / �Լ� �����
void viewMenu();
int getSelNum();
void userInputAddress(AddressBook* pAdr);
void inputAddress();
void searchAddress();
void updateAddress();
void deleteAddress();
void showAddress(AddressBook* pAdr);
void printAllAddress();
void exitApp();
int processWork(int selNum);
void laterProcess();

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
	getchar(); // '\n' �� ���ۿ��� ����

	return selNum;
}

void userInputAddress(AddressBook* pAdr)
{
	printf("�̸� �Է�: ");
	fgets(pAdr->name, sizeof(pAdr->name), stdin);
	pAdr->name[strlen(pAdr->name) - 1] = '\0';// '\n' -> '\0'
	printf("�ּ� �Է�: ");
	fgets(pAdr->address, sizeof(pAdr->address), stdin);
	pAdr->address[strlen(pAdr->address) - 1] = '\0';
	printf("���� �Է�: ");
	char age[4] = { 0 };
	fgets(age, sizeof(age), stdin);	// "24"
	pAdr->age = atoi(age);		// "24" -> 24
	printf("����ȣ �Է�: ");
	char phone[20] = { 0 };
	fgets(phone, sizeof(phone), stdin);	// "24"
	pAdr->phone = atoi(phone);		// "24" -> 24
	printf("Ű �Է�: ");
	char height[10] = { 0 };
	fgets(height, sizeof(height), stdin); // "174.5"
	pAdr->height = (float)atof(height);	   //"174.5" -> 174.5
	printf("������ �Է�: ");
	char weight[10] = { 0 };
	fgets(weight, sizeof(weight), stdin);	// "75.5"
	pAdr->weight = (float)atof(weight);	   // "75.5" -> 75.5
}

void inputAddress()
{
	AddressBook* pAdr = &addressBook[g_nAdrCnt];
	userInputAddress(pAdr);
	g_nAdrCnt++;
	printf("�Է�ó���Ͽ����ϴ�~\n");
}

void searchAddress()
{
	char name[20] = { 0 };
	printf("�˻��� �̸� �Է�: ");
	fgets(name, sizeof(name) - 1, stdin);
	name[strlen(name) - 1] = 0;
	for (int i = 0; i < g_nAdrCnt; i++)
	{
		// ���������� �Ű澲�� �ʰڴ�.
		if (strncmp(name, addressBook[i].name,
			strlen(name)) == 0)	// ����
		{
			showAddress(&addressBook[i]);
			break;
		}
	}
	printf("�˻�ó���Ͽ����ϴ�~\n");
}

void updateAddress()
{
	char name[20] = { 0 };
	printf("������ �̸� �Է�: ");
	fgets(name, sizeof(name) - 1, stdin);
	name[strlen(name) - 1] = 0;
	for (int i = 0; i < g_nAdrCnt; i++)
	{
		// ���������� �Ű澲�� �ʰڴ�.
		if (strncmp(name, addressBook[i].name,
			strlen(name)) == 0)	// ����
		{
			printf("[������ �����͸� ���� �Է�]\n");
			userInputAddress(&addressBook[i]);
			showAddress(&addressBook[i]);
			break;
		}
	}
	printf("����ó���Ͽ����ϴ�~\n");
}

void deleteAddress()
{
	char name[20] = { 0 };
	printf("������ �̸� �Է�: ");
	fgets(name, sizeof(name) - 1, stdin);
	name[strlen(name) - 1] = 0;
	for (int i = 0; i < g_nAdrCnt; i++)
	{
		// ���������� �Ű澲�� �ʰڴ�.
		if (strncmp(name, addressBook[i].name,
			strlen(name)) == 0)	// ����
		{
			showAddress(&addressBook[i]);
			printf("Really(Y/N)? ");
			char ch = getchar();
			getchar();			// '\n'�� ����
			if (ch == 'Y' || ch == 'y')
			{
				for (int j = i + 1; j < g_nAdrCnt; j++)
				{
					addressBook[j - 1] = addressBook[j];
				}
				g_nAdrCnt--;
				printf("����ó���Ͽ����ϴ�~\n");
			}
			break;
		}
	}
}

void showAddress(AddressBook* pAdr)
{
	printf("�̸� : %s\n", pAdr->name);
	printf("�ּ� : %s\n", pAdr->address);
	printf("���� : %d\n", pAdr->age);
	printf("����ȣ : %d\n", pAdr->phone);
	printf("Ű : %.1f\n", pAdr->height);
	printf("������ : %.1f\n", pAdr->weight);
	printf("----------------------\n\n");
}

void printAllAddress()
{
	for (int i = 0; i < g_nAdrCnt; i++)
	{
		showAddress(&addressBook[i]);
	}
	printf("��ü���ó���Ͽ����ϴ�~\n");
}
void exitApp()
{
	printf("���α׷� �����ϰڽ��ϴ�~\n");
}

int processWork(int selNum)
{
	int ret = 1;

	switch (selNum)
	{
	case INPUT_ADR:
		inputAddress();
		break;
	case SEARCH_ADR:
		searchAddress();
		break;
	case UPDATE_ADR:
		updateAddress();
		break;
	case DELETE_ADR:
		deleteAddress();
		break;
	case PRINTALL_ADR:
		printAllAddress();
		break;
	case EXIT_ADR:
		exitApp();
		ret = 0;
		break;
	default:
		printf("�� �� �Է��ϼ̽��ϴ�!\n");
		break;
	}

	return ret;
}

void laterProcess()
{
	getchar();		// scanf_s���� �Էµ� \n�� ó��
	getchar();		// �ƹ� �Է�(ȭ�� ��� ����)
	clrscr();		// ȭ�� û��
}

void main()
{
	int selNum = 0;
	int isRun = 1;	// 1�̸� �ݺ�, 0�̸� ����
	while (isRun)
	{
		viewMenu();						// 1. �޴� �����ֱ�
		selNum = getSelNum();			// 2. ����� �Է�
		isRun = processWork(selNum);	// 3. ó��
		laterProcess();					// 4. ��ó��
	}
}