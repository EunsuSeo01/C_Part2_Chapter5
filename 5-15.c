/*
 void�� ������ ���� vx�� ���� ����ȯ�� �Ͽ� *vx ���� ����ϴ� ����.
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

	return 0;
}