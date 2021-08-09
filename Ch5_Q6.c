/*
 Ch5 �������� 6�� Ǯ��. -> ��ȯŸ���� void*���� ���� �򰥷ȴ�.
 last modified 2021-08-10
*/
#include <stdio.h>

// ��ȯ Ÿ���� ��� void�� �������� �Լ� 4��.
void* add(int a, int b);
void* subtract(int a, int b);
void* multiply(int a, int b);
void* divide(int a, int b);

int main(void) {
	int a = 3;
	int b = 4;
	void* result = NULL;

	result = add(a, b);
	printf("%d add %d = %d \n", a, b, *(int*)result);
	result = subtract(a, b);
	printf("%d subtract %d = %d \n", a, b, *(int*)result);
	result = multiply(a, b);
	printf("%d multiply %d = %d \n", a, b, *(int*)result);
	result = divide(a, b);
	printf("%d divide %d = %.2lf \n", a, b, *(double*)result);

	return 0;
}

void* add(int a, int b) {
	static int sum;
	sum = a + b;
	return &sum;	// void�� �����ʹ� � Ÿ���� �ڷ����� �ּҵ��� �� �� �� ����.
}

void* subtract(int a, int b) {
	static int sub;
	sub = a - b;
	return &sub;
}

void* multiply(int a, int b) {
	static int mul;
	mul = a * b;
	return &mul;
}

void* divide(int a, int b) {
	static double div;
	div = (double)a / b;
	return &div;
}