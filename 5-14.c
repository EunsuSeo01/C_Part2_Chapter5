/*
 void�� ������ ����.
 last modified 2021-08-09
*/
#include <stdio.h>
int main(void) {
	char c = 3;
	double d = 3.1;
	
	void* vx = NULL;	// void�� ������ ������ �پ��� �ڷ����� �ּҸ� ������ �� �ִ�.

	vx = &c;	// char�� ������ �ּҸ� ������ �� �ִ�.
	printf("vx�� �ּҰ� : %x \n", vx);
	// printf("vx�� �� : %d \n", *vx);		// ����. -> �ּҸ� �����ϰ� ����!! ������ ���� �Ұ�.

	vx = &d;	// double�� ������ �ּҸ� ������ �� �ִ�.
	printf("vx�� �ּҰ� : %x \n", vx);
	// printf("vx�� �� : %lf \n", *vx);		// ����. -> �ּҸ� ���� ����. �� �����̳� ������ �Ұ�.

	return 0;
}