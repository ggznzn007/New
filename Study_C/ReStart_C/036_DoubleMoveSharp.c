/* 2���� ���ڸ� �̵���Ű��
*/

#include "turboc.h"

void main()
{
	setcursortype(NOCURSOR);	// No Ŀ��

	int x = 0;
	for (x = 0; x <= 80; x++)
	{
		clrscr();					// ȭ�� ��ü �����
		gotoxy(x, 12);
		puts("#");
		delay(10);
	}
}