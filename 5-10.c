/*
 static Ű���� ��� ����.
 last modified 2021-08-09
*/
#include <stdio.h>

// �Լ��� ����.
char* string1(void);
char* string2(void);

int main(void) {
	char* p1 = NULL;
	char* p2 = NULL;

	p1 = string1();		// �Լ��� ȣ��.
	p2 = string2();

	printf("%s \n", p1);
	printf("%s \n", p2);

	return 0;
}

// �Լ��� ����.
char* string1(void) {
	static char str[] = "Good";		// ���� ������ ���������� �Լ� ���� �Ŀ��� ��� ����!
	return str;		// �迭�� ���� �ּ�, �� ���� G�� ����Ű�� �ּҸ� ��ȯ��.
}

char* string2(void) {
	static char str[] = "morning";
	return str;		// �迭�� ���� �ּ�, �� ���� m�� ����Ű�� �ּҸ� ��ȯ��.
}
