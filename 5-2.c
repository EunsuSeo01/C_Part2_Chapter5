/*
 Call by reference�� ������ ����.
 last modified 2021-08-03
*/
#include <stdio.h>

int func(int* i);

int main(void) {
	int a = 10;
	int result = 0;

	result = func(&a);		// a�� �ּҰ��� �Ѱ���. -> Call by reference.
	printf("%d \n", result);
	printf("%d \n", a);		// a�� ���� �ٲ�.

	return 0;
}

int func(int* i) {	// �ּҸ� ���� �� �ִ� �Ű����� Ÿ���� ������!
	*i = *i + 1;	// * ������ �̿��ؼ� ���� �ּҸ� ������. -> ���� ���� �����!

	return *i;		// ���� �� ����.
}