#include <iostream>

using namespace std;

int main()
{
	int age;

	cout << "�������� ���̸� �Է����ּ��� : ";
	cin >> age;
	if (age <= 0)
	{
		cout << "��ȿ���� ���� ���Դϴ� �ٽ��Է����ּ���.";
	}
	else
		cout << "�����" << age << "�� �̱���." << endl;
	return 0;
}