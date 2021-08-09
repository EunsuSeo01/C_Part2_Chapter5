/*
 void�� ������ ������ ���� ����ȯ�Ͽ� �����Ͱ� ����Ű�� �ִ� ������ �������� ������ ���� ����.
 last modified 2021-08-09
*/
#include <stdio.h>
int main(void) {
	char c = 3;
	double d = 3.1;

	void* vx = NULL;	// void�� ������ ���� ����.

	vx = &c;
	printf("vx�� ������ ��(= �ּ�) : %x \n", vx);
	printf("*vx�� �� : %d \n", *(char*)vx);		// (char*��) ���� ����ȯ.

	vx = &d;
	printf("vx�� ������ ��(= �ּ�) : %x \n", vx);
	printf("*vx�� �� : %lf \n", *(double*)vx);	// (double*��) ���� ����ȯ.
	printf("----------------------------------\n");

	vx = &c;
	*(char*)vx = 5;		// ���� ����ȯ�� �Ͽ� ������ ����� ���� ������ ���� ����!
	printf("vx�� ������ ��(= �ּ�) : %x \n", vx);
	printf("c�� ������ �� : %d \n", c);
	printf("*vx�� �� : %d \n", *(char*)vx);

	vx = &d;
	*(double*)vx = 5.1;		// ���� ����ȯ���� ������ ����� ���� ����.
	printf("vx�� ������ ��(= �ּ�) : %x \n", vx);
	printf("d�� ������ �� : %lf \n", d);
	printf("*vx�� �� : %lf \n", *(double*)vx);


	return 0;
}